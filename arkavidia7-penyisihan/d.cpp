#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

int isEnd(int xnow, int ynow, int n, int m, int first, int *direction) {
    // cout << endl << xnow << " " << ynow << " " << first << endl;
    if ((xnow + direction[0] == 0 && ynow + direction[1] == 0 &&
         (first == 0)) ||
        (xnow + direction[0] == n + 1 && ynow + direction[1] == 0) ||
        (xnow + direction[0] == 0 && ynow + direction[1] == m + 1) ||
        (xnow + direction[0] == n + 1 && ynow + direction[1] == m + 1)) {
        // cout << "break  " << xnow << endl;
        return 1;
    }
    return 0;
}

void solve() {
    int m, n, x, y;
    cin >> n >> m >> x >> y;

    if (m == 1 || n == 1) {
        if (n == 1) {
            cout << y << endl;
        } else {
            cout << x << endl;
        }
        return;
    }

    int xnow = 1, ynow = 1, step = 1, first = 1;
    int direction[] = {1, 1};  // x:horizontal y:vertikal

    vector<vector<int>> matrix(n, vector<int>(m, 0));

    // cout << endl;
    // cout << direction[0] << " " << direction[1] << endl;
    // cout << xnow << " " << ynow << endl;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    while (true) {
        // sleep(2);
        if (!isEnd(xnow, ynow, n, m, first, direction)) {
            // set matriks
            // cout << "xnow " << xnow << "   ynow " << ynow << endl;
            matrix[xnow - 1][ynow - 1] = step;

            // cek pinggir
            if ((xnow == n || xnow == 1 || ynow == m || ynow == 1) &&
                first == 0) {
                int cont = 1;

                if (xnow + direction[0] == 0 || xnow + direction[0] == n + 1) {
                    direction[0] = -direction[0];
                    ynow += direction[1];

                    if (step == 9) {
                        step = 1;
                    } else {
                        step++;
                    }
                } else if (ynow + direction[1] == 0 ||
                           ynow + direction[1] == m + 1) {
                    direction[1] = -direction[1];
                    xnow += direction[0];

                    if (step == 9) {
                        step = 1;
                    } else {
                        step++;
                    }
                } else {
                    cont = 0;
                }
                if (cont == 1) {
                    continue;
                }
            }

            // gerak
            xnow += direction[0];
            ynow += direction[1];

        } else {
            matrix[xnow - 1][ynow - 1] = step;
            break;
        }

        // cout << endl;
        // cout << direction[0] << " " << direction[1] << endl;
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         cout << matrix[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        first = 0;
    }

    // cout << endl << "hasil akhir " << endl;
    // // cout << direction[0] << " " << direction[1] << endl;
    // // cout << xnow << " " << ynow << endl;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << matrix[x - 1][y - 1] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; ++i) {
        solve();
    }

    return 0;
}