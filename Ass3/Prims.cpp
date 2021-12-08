#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7, N = 1e5+2;
int main() {
	int vertices, edges;
	cout<<"Enter the no of vertices and edges";
	cin>>vertices>>edges;
	vector<pair<int, int>> adj[N];
	for(int i = 0; i<edges; i++) {
		int x, y, wt;
		cin>>wt>>x>>y;
		adj[x].push_back({y, wt});
		adj[y].push_back({x, wt});
	}

	vector<int> parent(N);	
	vector<int> key(N);	
	vector<bool> mstSet(N);	

	for(int i = 0; i<vertices; i++) {
		key[i] = INT_MAX;
		mstSet[i] = false;
		parent[i] = -1;
	}

	key[0] = 0;
	parent[0] = -1;

	for(int count = 0; count < vertices - 1; count++) {
		int mi = INT_MAX, u;

		
		for(int v = 0; v < vertices; v++) {
			if(!mstSet[v] and key[v] < mi) {
				mi = key[v];
				u = v;
			}
		}

		
		mstSet[u] = true;

		
		for(auto i: adj[u]) {
			int v = i.first;
			int weight = i.second;
			if(!mstSet[v] and weight < key[v]) {	
				parent[v] = u;			
				key[v] = weight;		
								
			}
		}
	}
	cout<<"MST is :"<<endl;
	for(int i = 0; i < vertices; i++) {
		cout<<parent[i] << " - "<<i<<endl;
	}
	return 0;
}