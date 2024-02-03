#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string nom = "";
    int f1 = 1, f2 = 1;
    for (int i = 1; i <= n; ++i) {
        if (f2 == i) {
            nom += 'O';
            int z = f2;
            f2 = f1 + f2;
            f1 = z;
        } else {
            nom += 'o';
        }
    }


     cout << nom; 
 

}
