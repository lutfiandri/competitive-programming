#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main() {
    int T, N, min;
    ll total = 0;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> N;
        int A[N];

        for (int j = 0; j < N; ++j) {
            cin >> A[j];
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