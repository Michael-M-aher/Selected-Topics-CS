#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

bool cmp(pair<int,int> a, pair<int,int> b) {
    return (a.second < b.second||(a.second == b.second && a.first < b.first));
}

int main() {
    FIO;
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    int ans = 1, last = v[0].second;
    for(int i = 1; i < n; i++) {
        if(v[i].first > last) {
            ans++;
            last = v[i].second;
        }
    }
    cout << ans << endl;
    return 0;
}