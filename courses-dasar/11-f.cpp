// https://tlx.toki.id/courses/basic/chapters/11/problems/F
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    int isSnake = s.find("_");
    if (isSnake >= 0) {
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '_') {
                s.erase(i, 1);
                s[i] -= 'a' - 'A';
            }
        }
    } else {
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] <= 'Z') {
                s[i] += 'a' - 'A';
                s.insert(i, "_");
            }
        }
    }

    cout << s << endl;

    return 0;
}