#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int main() {
    FIO;
    int m,n;
    cin>>m >> n;
    map<string , int> mp;
    while (m--) {
        string s;
        int x;
        cin>>s >> x;
        mp[s] = x;
    }
    while (n--) {
        string s;
        int ans = 0;
        while (cin>>s && s != ".") {
            ans += mp[s];
        }
        cout<<ans<<"\n";
    }
    return 0;
}