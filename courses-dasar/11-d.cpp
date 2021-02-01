// https://tlx.toki.id/courses/basic/chapters/11/problems/D
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b, c, d;
    cin >> a >> b >> c >> d;

    int pos = a.find(b);
    a.erase(pos, b.length());
    int posc = a.find(c);
    a.insert(posc + c.length(), d);

    cout << a << endl;

    return 0;
}