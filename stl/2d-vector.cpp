#include <bits/stdc++.h>
using namespace std;

int main() {
    int row = 4;
    int col = 5;

    vector<vector<int>> v(row, vector<int>(col, -1));

    for (auto i : v) {
        for (auto ii : i) {
            cout << ii << " ";
        }
        cout << endl;
    }

    return 0;
}