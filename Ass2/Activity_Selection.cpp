#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter number of activities";
    cin>>n;
    vector<vector<int>> v;
    cout<<"enter starting and ending time";
    for(int i=0;i<n;i++)
    {   int start,end;
        cin>>start>>end;
        v.push_back({start,end});
    }
    sort(v.begin(),v.end(),[&](vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    });
    int take=1;
    int end=v[0][1];
    for(int i=1;i<n;i++)
    {
        if(v[i][0]>=end)
        {
            take++;
            end=v[i][1];
        }
    }
    cout<<"No of process are ";
    cout<<take;
    return 0;
}