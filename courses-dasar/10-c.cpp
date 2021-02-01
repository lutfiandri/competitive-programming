#include <bits/stdc++.h>
using namespace std;

int reverse(int a) {
    int aa = 0;

    while (a > 0) {
        aa = aa * 10 + a % 10;
        a /= 10;
    }

    return aa;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, aa, bb;
    cin >> a >> b;

    aa = reverse(a);
    bb = reverse(b);

    cout << reverse(aa + bb) << endl;

    return 0;
}