#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

const int mod = 1e9+7, inf = 1e5+2;
int main() {
	int vertices, edges;
	cout<<"enter no of vertices and edges";
	cin>>vertices>>edges;
	vi dist(vertices+1, inf);
	vector<vector<pair<int, int>>> graph(vertices+1);
	cout<<"enter the edges with weight ";
	for(int i = 0; i<edges; i++) {
		int x, y, w;
		cin>>x>>y>>w;
		graph[x].push_back({w, y});
		graph[y].push_back({w, x}); // first-> weight, second -> vertex
	}
	int source;
	cout<<"Enter the source: ";cin>>source;
	dist[source] = 0;
	set<pair<int, int>> s;
	s.insert({0, source}); // first -> distance, second -> vertex
	while (!s.empty())
	{
		auto u = *s.begin();
		s.erase(u);
		for(auto i: graph[u.second]) {
			if(dist[i.second] > dist[u.second] + i.first) {
				s.erase({dist[i.second], i.second});
				dist[i.second] = dist[u.second] + i.first;
				s.insert({dist[i.second], i.second});
			}
		}
	}
	cout<<"Distance between  "<<source<<" and vertex: "<<endl;
	for(int i = 0; i<=vertices; i++) {
		if(dist[i] < inf) cout<<i<<": "<<dist[i]<<endl;
		else cout<<i<<": -1"<<endl;
	}
	
 	return 0;
}