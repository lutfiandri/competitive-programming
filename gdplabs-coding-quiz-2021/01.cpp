#include <bits/stdc++.h>
using namespace std;

typedef vector<uint32_t> vi;
vi v;

void extract(uint32_t n) {
    while (n) {
        uint32_t num = n % 10;
        v.push_back(num);
        n /= 10;
    }
}

int main() {
    uint32_t I, J;
    cin >> I >> J;

    for (uint32_t j = J; j >= I; --j) {
        extract(j);
    }

    sort(v.begin(), v.end(), greater<uint32_t>());

    for (auto i : v) {
        cout << i;
    }

    cout << endl;

    return 0;
}