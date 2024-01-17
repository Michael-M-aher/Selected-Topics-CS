#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int main() {
    FIO;
    int n,k;
    cin >> n>>k;
    vector<int> v(n+1);
    for (int i = 1; i <= n; ++i) {
        cin>>v[i];
        v[i]+=v[i-1];
    }
    int mn=1e9,ans=0;
    for (int i = k; i <= n; ++i) {
        int c = v[i]-v[i-k];
        if(c<mn){
            mn = c;
            ans = i-k+1;
        }
    }
    cout<<ans;

    return 0;
}