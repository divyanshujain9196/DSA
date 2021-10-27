#include <bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int a[n1];
    int b[n2]; // temp arrays
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[m+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;i++;
        }
        else {
            arr[k]=b[j];
            k++;j++;
        }
    }
    while(i<n1)
    {
        arr[k]=a[i];
            k++;i++;

    }
    while(j<n2)
    {
         arr[k]=b[j];
            k++;j++;
    }
}
void mergesort(int arr[],int l,int r)
{
    if(l<r)

{
  int mid=(l+r)/2;
  mergesort(arr,l,mid);
  mergesort(arr,mid+1,r);

  merge(arr,l,mid,r);
}
}
int main() {
     int a[10], n;
    cout<<"enter size of array ";
    cin>>n;
    cout<<"enter array elments ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   mergesort(a,0,n-1);
    cout<<"sorted arrray is ";
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
