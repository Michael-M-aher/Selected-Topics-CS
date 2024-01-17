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
    vector<int> v(n);
    for(int i = 0; i < n; ++i) cin >> v[i];
    sort(v.begin(), v.end());
    int time = 0;
    int ans = 0;
    for (int i = 1; i < n+1; ++i) {
        if(time <= v[i-1]) {
            time += v[i-1];
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}