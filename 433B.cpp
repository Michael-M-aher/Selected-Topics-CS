#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int main() {
    FIO;
    int n;
    cin >> n;
    vector<ll> v(n),s(n+1,0),u(n+1,0);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
        s[i+1] = v[i];
        s[i+1] += s[i];
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; ++i) {
        u[i+1] = v[i];
        u[i+1] += u[i];
    }
    int q;cin>>q;
    while (q--){
        int t,l,r;cin>>t>>l>>r;
        l--;
        if(t==1){
            cout<<s[r]-s[l]<<"\n";
        }else{
            cout<<u[r]-u[l]<<"\n";
        }

    }

    return 0;
}