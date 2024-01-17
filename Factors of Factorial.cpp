#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

unordered_map<int, int> primeFactorization(int n) {
    unordered_map<int, int> res;
    for (int i = 2; i*i <= n; ++i) {
        int cnt = 0;
        while (n % i == 0) {
            n /= i;
            ++cnt;
        }
        if (cnt) res[i] = cnt;
    }
    if (n > 1) res[n] = 1;
    return res;
}

int main() {
    FIO;
    int n;
    cin >> n;
    unordered_map<int, int> allFactors;
    for (int i =2; i <= n; ++i) {
        auto factors = primeFactorization(i);
        for (auto factor : factors) {
            allFactors[factor.first] += factor.second;
        }
    }
    ll res = 1;
    for (auto factor : allFactors) {
        res = (res * (factor.second + 1ll)) % mod;
    }
    cout << res << "\n";
    return 0;
}