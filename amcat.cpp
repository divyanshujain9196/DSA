#include<iostream>
using namespace std;
int main(){
    string s;cin>>s;
    string ans = "";
    for(char c: s) {
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            ans += c;
        }
    }
        cout<<ans<<endl;
}