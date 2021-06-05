#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, temp, pos = 0, time = 0;
    cin >> N >> M;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> temp;
        arr[temp - 1] = pos;
        pos++;
    }

    for (int i = 0; i < M; i++) {
        cin >> temp;
        if (arr[temp] != 0) {
            time += arr[temp - 1];

            cout << time << endl;

            arr[time - 1] = 0;
            for (int j = 0; j < N; j++) {
                if (arr[j] < N) {
                    arr[j] += 1;
                }
            }
        }
    }

    time *= 2;

    cout << time << endl;

    // for (int i = 0; i < N; ++i) {
    //     cout << arr[i] << endl;
    // }

    return 0;
}