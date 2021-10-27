#include <bits/stdc++.h>
using namespace std;
#define l LONG_MAX
#define ll long long
int main() {
    ll ab=1;
    ll testcases;
    cin>>testcases;
    while (testcases--)
    {
        ll number;
        cin>>number;
        string trash;
        cin>>trash;
        vector<ll> pd(number,l);
        vector<ll> sd(number,l);
        for(ll i = 0; i<trash.length(); i++) {
			if(trash[i] == '1') {
				pd[i] = 0;
			} else {
				if(i == 0) {
					pd[i] = l;
				} else {
					if(pd[i-1] == l) {
						pd[i] = l;
					} else {
						pd[i] = pd[i-1] + 1;
					}
				}
			}
		}
		for(ll i = number-1; i>=0; i--) {
			if(trash[i] == '1') {
				sd[i] = 0;
			} else {
				if(i == number-1) {
					sd[i] = l;
				} else {
					if(sd[i+1] == l) {
						sd[i] = l;
					} else {
						sd[i] = sd[i+1] + 1;
					}
				}
			}
		}

		ll count = 0;
		for(ll i = 0; i<number; i++) {
			count += min(pd[i], sd[i]);
		}
		cout<<"Case #"<<ab<<": "<<count<<endl;
		ab++;
	}
    
    
    return 0;
}