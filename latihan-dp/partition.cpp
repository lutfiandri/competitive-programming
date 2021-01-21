#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;

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

void solve(int x, vvvi &memo) {
    int sisa;
    vvi row;
    vi col;
    if (memo[x][0][0] == 0) {
        for (int i = 1; i <= x / 2; ++i) {
            sisa = x - i;
            col.push_back(i);
            col.push_back(sisa);

            if (i > 0) {
                solve(i, memo);
                solve(sisa, memo);
            }

            row.push_back(col);
            col.clear();
        }
        memo[x] = row;
    }
}

// void solve2(int x, vvvi &memo) {
//     for (auto mm : memo[x]) {
//         for (auto m : mm) {
//             cout << m << " ";
//         }
//         cout << endl;

//         for (auto m : mm) {
//             if (m > 1 && m < x) {
//                 cout <<
//             }
//         }
//     }
// }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x;

    fastscan(x);
    vvvi memo(x + 1, vvi(1, vi(1, 0)));
    // memo[1][0][0] = 1;
    // cout << x << endl;
    solve(x, memo);
    // solve2(x, memo);

    // show memo

    cout << endl << "memo" << endl;
    for (auto mm : memo) {
        for (auto m : mm) {
            for (auto i : m) {
                cout << i << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}