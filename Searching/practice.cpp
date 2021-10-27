#include <bits/stdc++.h>
using namespace std;
int& a(int n){
     int *i=&n;
    return i;
}
int* a1(){
    int k=10;
    return &k;
}
int main() {
    int n=10;
    int& k=a(n);
    int* k1=a1();
    cout<<k<<endl;
    cout<<*k1<<endl;
    return 0;
}