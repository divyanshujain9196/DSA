#include <bits/stdc++.h>
using namespace std;
const int N= 1e5+6;
vector<int> parent(N);
vector<int> sz(N);
void make_set(int V){
    parent[V]=V;
    sz[V]=1;
}
int find_set(int V){
    if(V==parent[V])
    return V;
return parent[V]=find_set(parent[V]);
}

void union_sets(int a,int b){
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        if(sz[a]<sz[b])
            swap(a,b);
        parent[b]=a;
        sz[a]+=sz[b];
    }
    
}

int main() {
    for(int i=0;i<N;i++)
    {
        make_set(i);
    }
    int n,m;
    cout<< "enter number of vertex ";
    cin>>n;
    cout<< "enter number of edges ";
    cin>>m;

    vector<vector<int>> edges;
    cout<<"enter edges vertex and weight ";
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({w,u,v});
    }
    sort(edges.begin(),edges.end());
     int cost=0;
     for(auto i:edges){
         int w=i[0];
         int u=i[1];
         int V=i[2];
         int x=find_set(u);
         int y=find_set(V);

         if(x==y)
             continue;
          else
          {    
            //   cout<<u<<"  "<<V<<endl;  For printing edges included in tree
              cost+=w;
              union_sets(u,V);
          }   
     }
     cout<<"Cost of minimum spanning tree is "<<cost;
    return 0;
}