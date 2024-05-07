#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string ch;
    cin >> ch;

    int start = 0;
    int end;
    while ((end = ch.find("WUB", start)) < ch.length()) {
        if (end != start) {
            cout << ch.substr(start, end - start) << " ";
        }
        start = end + 3;
    }

    if (start < ch.length()) {
        cout << ch.substr(start);
    }

}