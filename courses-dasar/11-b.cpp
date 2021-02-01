// https://tlx.toki.id/courses/basic/chapters/11/problems/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, x;
    cin >> s >> x;

    int pos = 0;

    while (pos != -1) {
        pos = s.find(x);
        if (pos != -1) {
            s.erase(pos, x.length());
        }
    }

    cout << s << endl;

    return 0;
}