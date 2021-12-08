#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter size of array";cin>>n;
    int a[n];
    cout<<"enter array elments ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    

    for(int i = 0; i<n-1; i++) { 
        int smallest_idx = i;   
        for(int j = i; j<n; j++) {  
            if(a[smallest_idx] > a[j]) {    
                smallest_idx = j;   
            }
        }
        swap(a[smallest_idx], a[i]); 
    }
    cout<<"Sorted array is ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}