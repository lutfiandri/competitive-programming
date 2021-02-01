#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vi v(0);

    int per = 2;
    while (n >= per) {
        if (n % per == 0) {
            v.push_back(per);
            n /= per;
        } else {
            per++;
        }
    }

    int s = v.size();
    // cout << s << endl;
    int bef = 0, p = 0;
    for (int i = 0; i < s; ++i) {
        if (v[i] != bef) {
            if (p > 1) {
                cout << "^" << p;
            }
            if (bef != 0) {
                cout << " x ";
            }
            bef = v[i];
            cout << v[i];
            p = 0;
        }
        ++p;
    }
    if (p > 1) {
        cout << "^" << p;
    }
    cout << endl;

    return 0;
}