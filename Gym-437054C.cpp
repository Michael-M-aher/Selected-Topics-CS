#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e6+5;
const int mod = 1e9 + 7;

bool isPrime[N];
void sieve(int n){
    fill(isPrime, isPrime + N, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i*i < n; ++i) {
        if (isPrime[i]){
            for (int j = i*i; j < n; j+=i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    FIO;
    int n;
    cin >> n;
    sieve(N);
    while (n--) {
        int a,b;cin >> a >> b;
        int ans = 0;
        for (int i = a; i <=b ; ++i) {
            if(isPrime[i]) ans++;
        }
        cout << ans;
        if(n) cout << "\n";
    }

    return 0;
}