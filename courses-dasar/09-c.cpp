#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, t;
    cin >> N;
    int arr[MAX + 1] = {0};

    for (int i = 0; i < N; ++i) {
        cin >> t;
        arr[t]++;
    }

    int max = 0;  // index
    for (int i = 0; i <= MAX; ++i) {
        if (arr[i] >= arr[max]) {
            max = i;
        }
    }

    cout << max << endl;

    return 0;
}