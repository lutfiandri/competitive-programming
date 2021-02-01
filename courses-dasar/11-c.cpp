// https://tlx.toki.id/courses/basic/chapters/11/problems/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int n;

    cin >> s >> n;

    for (int i = 0; i < s.length(); ++i) {
        if ((s[i] + n) > 'z') {
            s[i] -= ('z' - 'a') + 1;
        }
        s[i] += n;
    }

    cout << s << endl;

    return 0;
}