#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, T;
    cin >> N;
    int v[2][N];

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> v[i][j];
        }
    }

    cin >> T;
    char a, b;
    int x, y;
    for (int i = 0; i < T; ++i) {
        cin >> a >> x >> b >> y;
        int aa = 0, bb = 0;
        if (a == 'B') {
            aa = 1;
        }
        if (b == 'B') {
            bb = 1;
        }

        swap(v[aa][x - 1], v[bb][y - 1]);
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << v[i][j];
            if (j != N - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}