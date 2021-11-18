#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> x, pair<int, int> y) {
	int f1 = x.second / x.first;
	int f2 = y.second / y.first;
	return f1 > f2;
}

int knapsack(vector<pair<int, int>> a, int W) {
	int ans = 0;
	sort(a.begin(), a.end(), compare);
	for(pair<int, int> i: a) {
		if(i.first <= W) {
			ans += i.second;
			W -= i.first;
		} else {
			ans += (i.second / i.first) * W;
			W = 0;
			break;
		}
	}
	return ans;
}
int main() {
	int n, W;
    cout<<"enter number of items ";
    cin>>n;
    cout<<"enter capacity of knapsack ";
    cin>>W;
    
	vector<pair<int, int>> a;
    cout<<"enter weight and cost of items ";
    for(int i=0;i<n;i++){
		int f, s;
		cin>>f>>s;             // f --> weight , s --> cost
		a.push_back({f, s});
	}
	cout<< "Maximum profit= "<<knapsack(a, W);
	return 0;
}
