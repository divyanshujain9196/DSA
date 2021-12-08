#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>


const int N = 1e5+2, mod = 1e9+7;
vi graph[N];
vector<bool> vis(N, false);

void dfs(int source) {
	
	vis[source] = true;
	
	vector<int>::iterator it;
	for(it = graph[source].begin(); it != graph[source].end(); it++) {
		if(!vis[*it]) {
			dfs(*it);
		}
	}

	cout<<source<<endl;
}

int main() {
	int vertices, edges;
	cout<<"Enter the no of vertices and edges";
	cin>>vertices>>edges;
	cout<<"enter the edges"<<endl;
	for(int i = 0; i<edges; i++) {
		int x, y;cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	vector<int> a;
	

	int source;cout<<"Enter the source: ";cin>>source;
	dfs(source);
	return 0;
}