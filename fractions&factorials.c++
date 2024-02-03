#include <bits/stdc++.h>
using namespace std;
int main(){
    #include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
    long long a, b;
    cin >> a >> b;
    if(b-a>5){
        cout<<0;
    }
    else {
    long long p=1;
    for(long long i=a+1;i<=b && p%10!=0;i++){
        p=(p*i)%10;
        
    }
    cout<<p%10;}
}




}
