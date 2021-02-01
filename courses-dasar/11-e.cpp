// https://tlx.toki.id/courses/basic/chapters/11/problems/E
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] >= 'a') {
            s[i] -= 'a' - 'A';
        } else {
            s[i] += 'a' - 'A';
        }
    }

    cout << s << endl;

    return 0;
}