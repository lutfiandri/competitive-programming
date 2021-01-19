#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;

vl A;

ll hasiland(int l, int r, ll lnr) {
    // cout << "lnr " << lnr << endl;
    // blabla
    ll result;
    if (r - l >= 1) {
        result = hasiland(l + 1, r, lnr & A[l + 1]);
    } else {
        result = lnr & A[r]
    }
    return result;
}

int main() {
    int T, N, Q;
    ll temp;
    cin >> T;
    // for (int i = 0; i < T; ++i) {
    //     cin >> N;
    //     ll A[N];
    //     for (int j = 0; j < N; ++j) {
    //         cin >> A[j];
    //     }

    //     cin >> Q;
    //     int l, r;
    //     for (int j = 0; j < Q; j++) {
    //         cin >> l >> r;
    //         --l;
    //         --r;
    //         cout << hasiland(l, r, A, A[l]) << endl;
    //     }
    //     //     cout << endl << (7 & 4 & 5 & 6 & 31) << endl;
    // }

    for (int i = 0; i < T; ++i) {
        cin >> N;
        for (int j = 0; j < N; ++j) {
            cin >> temp;
            A.push_back(temp);
        }

        cin >> Q;
        int l, r;
        for (int j = 0; j < Q; j++) {
            cin >> l >> r;
            --l;
            --r;
            cout << hasiland(l, r, A[l]) << endl;
        }
        //     cout << endl << (7 & 4 & 5 & 6 & 31) << endl;
    }

    return 0;
}