#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
int main() {
    for (int i= 1; i <= 26; ++i) {
        if (gcd(i, 26) == 1) 
            cout << i << ' ';
    }
    return 0;
}
