#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll summm(ll x, ll *A, ll n) {
    ll total = 0;
    for (int i = 0; i < n; ++i) {
        if (A[i] < x) {
            total += A[i] * A[i];
        } else {
            total += (A[i] % x) * (A[i] % x);
        }
    }
    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, Q, X;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> N >> Q;
        ll A[N];
        for (int j = 0; j < N; ++j) {
            cin >> A[j];
        }

        for (int j = 0; j < Q; ++j) {
            cin >> X;
            cout << summm(X, A, N) << endl;
        }
    }

    return 0;
}