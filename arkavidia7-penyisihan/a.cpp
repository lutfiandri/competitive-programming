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

    return 0;
}