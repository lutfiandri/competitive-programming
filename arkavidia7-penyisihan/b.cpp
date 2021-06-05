#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int getIndex(vector<int> v, int K) {
    auto it = find(v.begin(), v.end(), K);
    return (it - v.begin());
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vi v;

    int N, M, temp;
    int time = 0;
    cin >> N >> M;

    for (int i = 0; i < N; ++i) {
        cin >> temp;
        v.push_back(temp);
    }

    for (int i = 0; i < M; ++i) {
        cin >> temp;
        int index = getIndex(v, temp);
        v.erase(v.begin() + index);
        v.insert(v.begin(), temp);
        time += index;
    }

    time *= 2;
    cout << time << endl;

    return 0;
}