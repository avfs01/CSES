#include <bits/stdc++.h>
using namespace std;
 
const long long mod = 1e9 + 7;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n;
    cin >> n;
 
    long long x = 1; 
    long long base = 2;
 
    for (int i = 0; i < n; i++) {
        x = (x * base) % mod; 
    }
 
    cout << x << '\n';
 
    return 0;
}  