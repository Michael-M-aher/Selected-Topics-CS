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
    for (auto &i : v) cin >> i;
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 1; i < n; ++i) {
        if (v[i] != v[i-1]) {
            ans = v[i];
            break;
        }
    }
    if (ans == 0){
        cout<<"NO\n";
    }else{
        cout<<ans<<"\n";
    }
    return 0;
}