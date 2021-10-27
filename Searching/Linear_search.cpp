#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;  cout<<"enter array size";
    cin>>n;
     int key,pos=-1;
    int a[n];
  
    cout<<"enter Array elements ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
cout<<"Enter element to search ";
cin>>key;
for(int i=0;i<n;i++)
{
    if(a[i]==key)
    {
        pos=i;
    }
    
}
if(pos==-1)
{
cout<<"element not found";
}
else{
    cout<<"elment found at position "<<pos;
}
    return 0;
}