#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

typedef long long ll;

const int mod = 1000000007;

int memo[MAX + 1];

int fibo(int n) {
    if (memo[n] != -1) {
        return memo[n];
    }
    ll result;
    if (n <= 2) {
        result = 1;
    } else {
        result = fibo(n - 1) % mod + fibo(n - 2) % mod;
    }

    memo[n] = (int)result % mod;
    return memo[n];
}

void solve() {
    int N;
    cin >> N;
    cout << fibo(N) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i <= MAX; i++) {
        memo[i] = -1;
    }

    // cout << "test" << endl;

    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        solve();
    }

    return 0;
}