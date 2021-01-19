#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll hasilxor(ll a, ll b, ll axb) {
    if (b - a <= 1) {
        return axb ^ b;
    }

    return hasilxor((a + 1), b, axb ^ (a + 1));
}

int main() {
    int T;
    cin >> T;
    ll l, r, diff, hasil;
    for (int i = 0; i < T; ++i) {
        cin >> l >> r;
        diff = r - l;
        hasil = hasilxor(l, r, l);
        cout << hasil << endl;
    }

    // cout << endl << (1 ^ 1) << endl;

    return 0;
}