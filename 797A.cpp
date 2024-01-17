#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

vector<int> factorize(int x){
    int n = x;
    vector<int> res;
    for (int i = 2; i * i <= x; ++i) {
        while (n % i == 0){
            res.push_back(i);
            n /= i;
        }
    }
    if (n > 1){
        res.push_back(n);
    }
    return res;
}

int main() {
    FIO;
    int n,k;
    cin >> n>>k;
    vector<int> res = factorize(n);
    if(res.size() < k){
        cout << -1;
        return 0;
    }
    for (int i = 0; i < k-1; ++i) {
        cout << res[i] << " ";
    }
    int y = 1;
    for (int i = k-1; i < res.size(); ++i) {
        y *= res[i];
    }
    cout << y;

    return 0;
}