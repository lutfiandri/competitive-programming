#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int abs(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

int pangkat(int x, int d) {
    int now = 1;
    for (int i = 0; i < d; ++i) {
        now *= x;
    }
    return now;
}

int hit(int a, int b, int d) { return abs(pangkat(a - b, d)); }

int hitung(int x1, int y1, int x2, int y2, int d) {
    return hit(x1, x2, d) + hit(y1, y2, d);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, d, x, y;
    cin >> n >> d;
    vi xx;
    vi yy;

    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        xx.push_back(x);
        yy.push_back(y);
    }

    int min = INT32_MAX, max = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int res = hitung(xx[i], yy[i], xx[j], yy[j], d);
            if (res < min) min = res;
            if (res > max) max = res;
        }
    }

    cout << min << " " << max << endl;

    return 0;
}