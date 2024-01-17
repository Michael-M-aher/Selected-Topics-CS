#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int main() {
    FIO;
    int n;cin >> n;
    vector<int> v(n+1);
    bool pass = true;
    for (int i = 0; i < 2; ++i) {
        int p;cin>>p;
        for (int i = 0; i < p; ++i) {
            int x;cin >> x;
            v[x] = 1;
        }
    }
    for (int i = 1; i <= n; ++i) {
        if(v[i] == 0) {
            pass = false;
            break;
        }
    }
    if(pass) cout << "I become the guy.\n";
    else cout << "Oh, my keyboard!\n";
    return 0;
}