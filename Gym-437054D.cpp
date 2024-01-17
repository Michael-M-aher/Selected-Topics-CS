#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int main() {
    FIO;
    int t;
    cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
        }
        sort(s.begin(), s.end());
        int m;cin >> m;
        vector<int> q(m);
        for (int i = 0; i < m; ++i) {
            cin >> q[i];
            ll numSatisfy =upper_bound(s.begin(),s.end(),q[i])-s.begin();
            cout<<n-numSatisfy<<" \n"[i==m-1];
        }
    }

    return 0;
}