#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int a,b,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            if(i==1)
            a=1;
            else
            a=a*2;
        }
        else{
            if(i==2)
            b=1;
            else
          
            b=b*3;
        }

    }
    if(n%2!=0)
    cout<<a;
    else
    cout<<b;
    return 0;
}