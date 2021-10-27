#include <bits/stdc++.h>
using namespace std;
 
 void redix(){

  
 }



int main()
{
    
    int n; 
    cout<<"enter array size ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements ";
    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    

    redixsort(arr, n);

    cout << "Sorted array is ";
    
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}