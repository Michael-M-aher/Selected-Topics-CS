#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e5 +5;
const int mod = 1e9 + 7;

tuple<int,int,ll> oper[N],quer[N];
ll arr[N],p1[N], p2[N];

void parSum(tuple<int,int,ll> t[],ll psum[],int n,int m){
    for (int i = 0; i < n; ++i) {
        auto &[l,r,d] = t[i];
        psum[l] +=d;
        psum[r+1]-=d;
    }
    for (int i = 1; i < m; ++i) psum[i]+=psum[i-1];
}

int main() {
    FIO;
    int n,m,k;
    cin>>n>>m>>k;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    for (int i = 0; i < m; ++i) {
        int l,r,d;cin>>l>>r>>d;
        oper[i] = {--l,--r,d};
    }
    for (int i = 0; i < k; ++i) {
        int l,r;cin>>l>>r;
        quer[i] = {--l,--r,1ll};
    }
    parSum(quer,p1,k,m);
    for (int i = 0; i < m; ++i) {
        auto &[l,r,d] = oper[i];
        d *= p1[i];
    }
    parSum(oper,p2,m,n);
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]+p2[i]<<" \n"[i==n-1];
    }
    return 0;
}