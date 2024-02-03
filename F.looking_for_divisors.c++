#include <iostream>
#include <algorithm>
 
using namespace std;
 
long long pgcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
 
long long countCommonDivisors(long long arr[], int n) {
    long long result = arr[0];
    for (int i = 1; i < n; i++) {
        result = pgcd(result, arr[i]);
    }
 
    
    long long divisors = 0;
    for (long long i = 1; i * i <= result; i++) {
        if (result % i == 0) {
           
            if (i * i == result) {
                divisors++;
            } else {
                divisors += 2;
            }
        }
    }
    return divisors;
}
 
int main() {
    int n;
    cin >> n;
 
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    long long result = countCommonDivisors(arr, n);
    cout << result;
 
    
}