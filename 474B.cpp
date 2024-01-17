#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int main() {
    FIO;
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    for (int i = 1; i < n; ++i) a[i] += a[i - 1];
    int m;cin >> m;
    for (int i = 0; i < m; ++i) {
        int q;cin >> q;
        cout << lower_bound(a.begin(), a.end(), q) - a.begin()+1 << '\n';

    }

    return 0;
}