#include <bits/stdc++.h>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    int n;
    cin>> n;
    string s ;
    cin>>s;
    int first_pos,last_pos;
    first_pos=s.find('B');
    last_pos=s.rfind('B') ;
    int res =(last_pos-first_pos+1);
    cout<<res;


    
}