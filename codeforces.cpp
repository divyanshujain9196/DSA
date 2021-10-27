#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
   
    while(t--)
    {   long long n,s;
         cin>>n>>s;
        if(n==1)
        cout<<s;
        else if(s==1)
        cout<<0;
        else
        {
            long long x;
            if(n%2==0)
            {
                x=(s/((n/2)+1));
            }
            else
                x=(s/(round(n/(2*1.0))));
                cout<<x;
            
            
        }
        cout<<endl;
    }
    return 0;
}