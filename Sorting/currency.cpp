#include <bits/stdc++.h>
using namespace std;
int main() {
     int amnt,temp;
     int a[4]={500,100,50,20};

     cout<<"enter amount";
     cin>>amnt;
     temp=amnt;
     for(int i=0;i<4;i++)
     {
         cout<<" notes of "<<a[i]<<" is "<<temp/a[i];
         cout<<endl;
         temp=temp%a[i];
     }

    return 0;
}