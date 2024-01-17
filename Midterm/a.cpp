#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e+5;
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
    int t = 1;
    cin >> t;
    sieve(N);
    while (t--) {
        int n;cin >> n;
        cout<<(isPrime[n] ? "YES" : "NO")<<"\n";
    }

    return 0;
}