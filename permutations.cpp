#include <bits/stdc++.h>

using namespace std;

int main() {

    long long int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
    } else if ( n <= 3) {
        cout << "NO SOLUTION" << endl;
    } else {
        for(int i = 1; i <= n/2; i++) {
            cout << 2*i << '\n';
        }
       
        for(int j = 0; j <= n/2; j++) {
            if( 2*j+1 <= n) cout << (2*j)+1 << '\n';  
        }
    }
    return 0;
}