#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+2;
int main()
{
    string s1, s2;
    
    vector<vector<int>> dp(N, vector<int>(N, 0));
    
    cout<<"enter first string ";
    cin >> s1;
    cout<<"enter second string ";
    cin>>s2;
    // for (int i = s2.size() + 1; i >= 0; i--)
    // {
    //     vector<int> a;
    //     for (int j = s1.size() + 1; j >= 0; j--)
    //     {
    //         a.push_back(0);
    //     }
    //     dp.push_back(a);
    // }

    for (int i = s1.size() - 1; i >= 0; i--)
    {
        for (int j = s2.size() - 1; j >= 0; j--)
        {
            if (s1[i] == s2[j])
            {
                dp[i][j] = dp[i + 1][j + 1] + 1;
                // dp[i][j] = s1[i] + dp[i+1][j+1];
            }
            else
            {
                dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);

                // if(t1.size() > t2.size()) {
                // 	dp[i][j] = {t1.size(), t1};
                // } else {
                // 	dp[i][j] = {t2.size(), t2};
                // }
            }
        }
    }
    // cout<<"Hello";
    cout << "Size of LCS = " << dp[0][0];
    return 0;
}