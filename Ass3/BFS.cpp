#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+2, N = 1e5+2;

vector<int> graph[N];
vector<bool> vis(N, false);

int main() {
	
	int edges, vertices;
	cin>>vertices>>edges;
	for(int i = 0; i<edges; i++) {
		int x, y;cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}	
	queue<int> q;
	int source;cout<<"Enter the source: ";cin>>source;
	vis[source] = true;
	q.push(source);
	while(!q.empty()) {
		int vertex = q.front();
		q.pop();
		cout<<vertex<<endl;
		vector<int>::iterator it;
		for(it = graph[vertex].begin(); it != graph[vertex].end(); it++) {
			if(!vis[*it]) {
				vis[*it] = true;
				q.push(*it);
			}
		}
	}

	return 0;
}