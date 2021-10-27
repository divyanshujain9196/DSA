#include <bits/stdc++.h>
using namespace std;
int main() {

	string s1, s2;
    cout<<"enter first string ";
    cin >> s1;
    cout<<"enter second string ";
    cin>>s2;
	vector<vector<pair<int, string>>> dp;

	for(int i = s2.size() + 1; i >= 0; i--) {
		vector<pair<int, string>> a;
		for(int j = s1.size() + 1; j >= 0; j--) {
			a.push_back({0, ""});
		}
		dp.push_back(a);
	}
	
	for(int i = s1.size() - 1; i >= 0; i--) {
		for(int j = s2.size() - 1; j >= 0;j--) {
			if(s1[i] == s2[j]) {
				dp[i][j].first = dp[i+1][j+1].first + 1;
				dp[i][j].second = s1[i] + dp[i+1][j+1].second;
			} else {
				string t1 = dp[i][j+1].second;
				string t2 = dp[i+1][j].second;
				if(t1.size() > t2.size()) {
					dp[i][j] = {t1.size(), t1};
				} else {
					dp[i][j] = {t2.size(), t2};
				}
			}
		}
	}

	cout<<"Size of LCS is"<<dp[0][0].first<<" and string is: "<<dp[0][0].second;
	return 0;
}