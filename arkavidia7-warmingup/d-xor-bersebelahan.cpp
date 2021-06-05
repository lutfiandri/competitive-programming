// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     // cout << (1 ^ 2) << endl;
//     // cout << (2 ^ 3) << endl;
//     // cout << (3 ^ 4) << endl;
//     // cout << (4 ^ 5) << endl;
//     // cout << (5 ^ 6) << endl;
//     // cout << endl;

//     // cout << (3 ^ 1) << endl;
//     // cout << (1 ^ 7) << endl;
//     // cout << (7 ^ 1) << endl;
//     // cout << (1 ^ 3) << endl;
//     // cout << endl;

//     // cout << (2 ^ 6) << endl;
//     // cout << (6 ^ 6) << endl;
//     // cout << (6 ^ 2) << endl;
//     // cout << endl;

//     // cout << (4 ^ 0) << endl;
//     // cout << (0 ^ 4) << endl;
//     // cout << endl;

//     // cout << (4 ^ 4) << endl;
//     // cout << endl;

//     // cout << (1 ^ 3) << endl;
//     // cout << endl;

//     return 0;
// }

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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, temp;
    // fastscan(n);
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n % 2 == 0) {
        cout << (arr[0] ^ arr[n / 2] ^ arr[n / 2 - 1] ^ arr[n - 1]) << endl;
    } else {
        cout << (arr[0] ^ arr[n - 1]) << endl;
    }

    return 0;
}