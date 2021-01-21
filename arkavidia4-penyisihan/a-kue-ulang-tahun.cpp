#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

void fastscan(int &number) {
    register int c;

    number = 0;

    c = getchar();

    for (; (c > 47 && c < 58); c = getchar()) {
        number = number * 10 + c - 48;
    }
}

void fastscanll(ll &number) {
    register ll c;

    number = 0;

    c = getchar();

    for (; (c > 47 && c < 58); c = getchar()) {
        number = number * 10 + c - 48;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, min, temp;
    ll total = 0;
    fastscan(T);
    for (int i = 0; i < T; ++i) {
        fastscan(N);
        int A[N];

        for (int j = 0; j < N; ++j) {
            fastscan(temp);
            A[j] = temp;
        }

        min = *min_element(A, A + N);

        for (auto a : A) {
            total += a - min;
            // cout << total << endl;
        }
        cout << total << endl;
        total = 0;
    }

    return 0;
}