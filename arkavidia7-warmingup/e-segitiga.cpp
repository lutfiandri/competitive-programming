// wrong answer

#include <bits/stdc++.h>
using namespace std;

void fastscan(int &number) {
    register int c;

    number = 0;

    c = getchar();

    for (; (c > 47 && c < 58); c = getchar()) {
        number = number * 10 + c - 48;
    }
}

void solve(int *arr, int n) {
    int count = 0;
    // int ii = 1, jj = 1, kk = 1;

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (arr[i] + arr[j] > arr[k]) {
                    count++;
                } else {
                    break;
                }
                // cout << arr[i] << " " << arr[j] << " " << arr[k] << " " <<
                // count
                //      << endl;
            }
        }
    }

    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    fastscan(N);
    int arr[N], temp;
    for (int i = 0; i < N; ++i) {
        fastscan(temp);
        arr[i] = temp;
    }

    sort(arr, arr + N);

    solve(arr, N);

    return 0;
}