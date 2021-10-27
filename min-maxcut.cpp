#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;



int main() {

	int t;cin>>t;
	while(t--) {
		string str;
		cin >> str;

		int c = 0, k = 0;
		for(int i=0;i<str.length();i++)
         {
			if (str[i] == '0') c = 1;
			else if (str[i] != '0' and c == 1) {
				k++; c = 0;
			}
		}
		if (str[str.length() - 1] == '0') k++;
		cout << min(k, 2) << endl;
		}

	return 0;
}