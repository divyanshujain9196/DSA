#include<bits/stdc++.h>
using namespace std;
    //Function to find minimum number of pages.

    bool isPossible(int arr[], int n, int m, int curr_min)
    {
        int studentsRequired = 1;
        int curr_sum = 0;

        // iterate over all books
        for (int i = 0; i < n; i++)
        {

            if (arr[i] > curr_min)
                return false;
            if (curr_sum + arr[i] > curr_min)
            {

                studentsRequired++;
                curr_sum = arr[i];
                if (studentsRequired > m)
                    return false;
            }

            else
                curr_sum += arr[i];
        }
        return true;
    }
    int findPages(int arr[], int n, int m)
    {
        //code here

        int sum = 0;

        if (n < m)
            return -1;

        for (int i = 0; i < n; i++)
            sum += arr[i];

        int start = 0, end = sum;
        int result = INT_MAX;

        // traverse until start <= end
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (isPossible(arr, n, m, mid)) 
            {
                result = min(result,mid);

                end = mid - 1;
            }

            else

                start = mid + 1;
        }

        return result;
    }
int main()
{
    int n=4;
    int m=2;
    int arr[]={12,34,67,90};
    cout<<"The minimum no. of pages are "<<findPages(arr,n,m)<<endl;
    return 0;
}