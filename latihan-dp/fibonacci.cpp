#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll fib(int n, ll *memo) {
    ll result;
    if (memo[n] != -1) {
        return memo[n];
    }
    if (n == 1) {
        result = 0;
    } else if (n == 2) {
        result = 1;
    } else {
        result = fib(n - 1, memo) + fib(n - 2, memo);
    }
    cout << "result " << n << " : " << result << endl;
    memo[n] = result;
    return result;
}

int main() {
    int n;
    cin >> n;
    ll memo[n + 1];
    for (int i = 0; i <= n; ++i) {
        memo[i] = -1;
    }
    ll un = fib(n, memo);
    cout << un << endl;

    for (auto m : memo) {
        cout << m << endl;
    }

    return 0;
}