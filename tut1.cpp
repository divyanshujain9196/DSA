#include "bits/stdc++.h"
using namespace std;

void search(string s,string s1, string prev)
{   
    
    if(s.length() == 0) return;
    if(s.substr(0, s1.length()) == s1) {
        if(prev != "X") {
            cout<<'X';
            prev = "X";
        }
            search(s.substr(s1.length()), s1, prev);
    }
    else {
        cout<<s[0];
        prev = s[0];
        search(s.substr(1), s1, prev);
        
    }
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
        string prev = "";   
	    string s1,s2;cin>>s1;
	   cin>> s2;
	    search(s1,s2, prev);
        cout<<endl;
	}
    // cout<<"Hello";
	return 0;
}