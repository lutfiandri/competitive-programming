#include <bits/stdc++.h>
using namespace std;

int abs(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

int fx(int a, int b, int x, int k) {
    if (k == 1) {
        return abs(a * x + b);
    }
    return abs(a * fx(a, b, x, k - 1) + b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, k, x;
    cin >> a >> b >> k >> x;

    int res = fx(a, b, x, k);
    cout << res << endl;

    return 0;
}