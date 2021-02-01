#include <bits/stdc++.h>
#define MAX 100
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

void inMatrix(vvi &m, int a, int b) {
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cin >> m[i][j];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, P, t;
    cin >> N >> M >> P;
    vvi m1(N, vi(M));
    vvi m2(M, vi(P));
    vvi m3(N, vi(P));

    inMatrix(m1, N, M);
    inMatrix(m2, M, P);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < P; ++j) {
            t = 0;
            for (int k = 0; k < M; ++k) {
                t += m1[i][k] * m2[k][j];
            }
            m3[i][j] = t;
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < P; ++j) {
            cout << m3[i][j];
            if (j != P - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}