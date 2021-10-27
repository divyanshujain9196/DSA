#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        return mid;
        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int n;
    cout << "enter array size";
    cin >> n;
    int key;
    int a[n];

    cout << "enter Array elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter element to search ";
    cin >> key;
    int result = binarysearch(a, key, 0, n - 1);
    if (result==-1)
        cout << "Element not found";
    else
        cout << "element found at index " << result;

    return 0;
}