#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e6+5;
const int mod = 1073741824 ;

int d[N];


int main() {
    FIO;
    int a,b,c;
    cin >> a >> b >> c;
    for (int i = 1; i < N; ++i) {
        for (int j = i; j < N; j+=i) {
            d[j]++;
        }
    }
    int ans = 0;
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            for (int k = 1; k <= c; ++k) {
                ans = (ans+d[i*j*k])%mod;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}