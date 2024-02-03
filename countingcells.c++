#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x ;
    cin>>n>>x;
    int s=0;
    for(int i=1;i<n;i++){
       if(x%i==0&& (x/i<n))// idea quotient *div
              s++;
     cout<<s;    }
    }
    cout<<s;



