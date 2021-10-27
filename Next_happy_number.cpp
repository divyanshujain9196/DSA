 #include<bits/stdc++.h>
using namespace std;
 
 
 int sumDigitSquare(int n)
{
    int sq = 0;
    while (n) {
        int digit = n % 10;
        sq += digit * digit;
        n = n / 10;
    }
    return sq;
}
    bool isHappy(int n) {
                 
     while (1) {

        if (n == 1)
            return true;
        n = sumDigitSquare(n);
        if (n == 4)
            return false;
    }
 
    return false;
    }
    int nextHappy(int N){
        // code hereint 
        long long i;
        for( i=N+1;i<10000;i++)
        {
            if(isHappy(i))
            break;
        }
        return i;
    }
     int main()
    {
        long long n;
       
        cout<<"enter number ";
         cin>>n;
         cout<<"Next happy number is "<<nextHappy(n);
return 0;
    }