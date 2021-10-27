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
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(a[j]<a[i])
    //         {
    //             int temp=a[j];
    //             a[j]=a[i];
    //             a[i]=temp;
    //         }
            
    //     }
    // }

    for(int i = 0; i<n-1; i++) { // n
        int smallest_idx = i;   // n
        for(int j = i; j<n; j++) {  // n*(n-i + 1)
            if(a[smallest_idx] > a[j]) {    // (n)*(n-i)
                smallest_idx = j;   // (n)*(n-i)
            }
        }
        swap(a[smallest_idx], a[i]); // n
    }
    cout<<"Sorted array is ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}