#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n ;
    cin>>n;
    long long s=0;

    if (n % 2 == 0) {
        s = n / 2;
    } else {
        s = -((n + 1) / 2);
    }
    cout<<s ;
}
