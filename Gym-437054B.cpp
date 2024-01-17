#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;
vector<int> freq(33);
bool canAdd(int x){
    for (int i = 0; i < 31; ++i) {
        if(x&(1ll<<i) && freq[i]){
            return false;
        }
    }
    return true;
}

void add(int x){
    for (int i = 0; i < 31; ++i) {
        if(x&(1ll<<i)){
            freq[i]++;
        }
    }
}

void remove(int x){
    for (int i = 0; i < 31; ++i) {
        if(x&(1ll<<i)){
            freq[i]--;
        }
    }
}
int main() {
    FIO;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int l= 0, r = 0, ans = 0;
    while (l<n){
        while(r<n&&canAdd(a[r])){
            add(a[r]);
            r++;
        }
        ans += r-l;
        remove(a[l]);
        l++;
    }
    cout << ans << "\n";
    return 0;
}