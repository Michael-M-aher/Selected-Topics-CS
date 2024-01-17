#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 3e3+5;
const int mod = 1e9 + 7;

bool isPrime[N];

vector<pair<int, int>> primeFactors(int n){
    vector<pair<int, int>> factors;
    for (int i = 2; i*i <= n; ++i) {
        if (n%i == 0){
            int cnt = 0;
            while (n%i == 0){
                n /= i;
                cnt++;
            }
            factors.emplace_back(i, cnt);
        }
    }
    if (n > 1){
        factors.emplace_back(n, 1);
    }
    return factors;
}

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
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        auto factors = primeFactors(i);
        if(factors.size() == 2) cnt++;
    }
    cout << cnt;
    return 0;
}