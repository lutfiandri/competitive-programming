#include <bits/stdc++.h>
using namespace std;

typedef int64_t ll;

void showSet(set<ll> S) {
    for (auto s : S) {
        cout << s << " ";
    }

    cout << endl;
}

ll poss(set<ll> H, ll x) {
    // x => target
    set<ll> A;
    ll temp;
    for (auto h : H) {
        temp = h;
        while (h <= x) {
            A.insert(h);
            // cout << h << " ";
            h += temp;
        }
        // cout << endl;
    }

    // showSet(A);

    return A.size();
    // return A.max_size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    ll h, x;
    set<ll> H;
    for (int i = 0; i < N; ++i) {
        cin >> h;
        H.insert(h);
    }
    cin >> x;

    cout << poss(H, x) << endl;

    // cout << INT64_MAX << endl;

    return 0;
}