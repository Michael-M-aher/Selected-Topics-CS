#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int main() {
    FIO;
    int x,n;
    cin >> n>>x;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int i = 0, j = 0,mn=1e9;
    ll sum=0;
    while (i<n && j<n) {
        while (j<n && sum < x) {
            sum += v[j++];
        }
        if(sum>=x)
            mn = min(mn, j - i);
        sum -= v[i++];
    }
    cout << (mn == 1e9 ? -1 : mn);
    return 0;
}