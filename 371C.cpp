#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

bool ok(vector<ll> rec,vector<ll> stock,vector<ll> p,ll m,ll k){
    ll b = rec[0]*k-stock[0],s = rec[1]*k-stock[1],c = rec[2]*k-stock[2];
    ll cost =0;
    if(b>0)cost+=b*p[0];
    if(s>0)cost+=s*p[1];
    if(c>0)cost+=c*p[2];
    return cost<=m;
}

int main() {
    FIO;
    vector<ll> rec(3),stock(3),p(3);
    string s;cin >> s;

    for(auto &i:s){
        if(i=='B')rec[0]++;
        else if(i=='S')rec[1]++;
        else rec[2]++;
    }
    for(auto &i:stock)cin >> i;
    for(auto &i:p)cin >> i;
    ll m;cin >> m;
    ll l = 0, r = 1e15,ans = 0;
    while(l<=r){
        ll mid = (l+r)/2;
        if(ok(rec,stock,p,m,mid)){
            ans = mid;
            l = mid+1;
        }else{
            r = mid-1;
        }
    }
    cout << ans << "\n";

    return 0;
}