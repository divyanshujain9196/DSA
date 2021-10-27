#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[],int arr2[],int n,int m)
{
    int i=n-1;
    int j=0;
    while(i>=0 && j<m)
    {
        if(arr1[i]>=arr2[j])
        {
            swap(arr1[i],arr2[j]);
            i--;j++;
        }
        else
        break;
        
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
}


int main() {
    int m,n;
    cout<<"enter size of array 1 ";
    cin>>n;
    cout<<"enter size of array 2";
    cin>>m;
    int arr1[n],arr2[m];
    cout<<"enter elements of first array ";
    for(int i=0;i<n;i++)
    {
     cin>>arr1[i];
    }
    cout<<"enter elements of second array ";
    for(int i=0;i<m;i++)
    {
     cin>>arr2[i];
    }
    merge(arr1,arr2,n,m);
    cout<<"array after merge ";
    for(int i=0;i<n;i++)
    cout<<arr1[i]<<" " ;
    for(int i=0;i<m;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    return 0;
}