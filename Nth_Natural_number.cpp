
    // 8 POints on GFG company#google

#include<bits/stdc++.h>
using namespace std;
	long long findNth(long long N)
    {
        // code here.
        long long result = 0;
 
    long long p = 1;
 
    while (N > 0) {
        result += (p * (N % 9));
         N = N / 9;
        p = p * 10;
    }
    return result;
    }
    int main()
    {
        long long n;
       
        cout<<"enter number ";
         cin>>n;
         cout<<"Nth natural  number is "<<findNth(n);
return 0;
    }