#include <bits/stdc++.h>
using namespace std;

void fastscan(int &number) {
    register int c;

    number = 0;

    c = getchar();

    for (; (c > 47 && c < 58); c = getchar()) {
        number = number * 10 + c - 48;
    }
}

// int batas[31];

void xorr(int x, int n) {
    if (n > 2) {
        for (int i = 0; i < n - 1; i++) {
            cout << 1 << " ";
        }
        cout << x << endl;
    } else {
        int akar = sqrt(x);
        akar++;
        int batas = akar * akar;
        cout << batas << " " << (batas ^ x) << endl;
    }
}

void andd(int x, int n) {
    for (int i = 0; i < n; i++) {
        cout << x;
        if (i == n - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}

void solve() {
    int x, n;
    string s;
    cin >> x >> n >> s;

    // cout << x << " " << n << " " << s << endl;

    if (s == "XOR") {
        xorr(x, n);
    } else {
        andd(x, n);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // for (int i = 0; i < 31; i++) {
    //     batas[i] = (1 << i);
    //     cout << batas[i] << " ";
    // }
    // cout << endl << endl;

    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        solve();
    }

    return 0;
}