#include <bits/stdc++.h>
using namespace std;

struct Memo {
    int l;
    int r;
    int value;
};

vector<Memo> memo;

int main() {
    memo.push_back(Memo({1, 2, 10}));
    memo.push_back(Memo({1, 3, 19}));

    for (auto m : memo) {
        cout << "l: " << m.l << "   r: " << m.r << "   val: " << m.value
             << endl;
    }
    return 0;
}