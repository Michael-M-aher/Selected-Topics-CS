#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 2e5 +5;
const int mod = 1e9 + 7;

ll p1[N];

int main() {
    FIO;
    int n,k,q;
    cin>>n>>k>>q;
    for (int i = 0; i < n; ++i) {
        int l,r;cin>>l>>r;
        p1[l]+=1;
        p1[r+1]-=1;
    }
    for (int i = 1; i < N; ++i) p1[i]+=p1[i-1];
    for (int i = 0; i < N; ++i) {
        p1[i] = (p1[i]>=k);
    }
    for (int i = 1; i < N; ++i) p1[i]+=p1[i-1];
    for (int i = 0; i < q; ++i) {
        int l,r;cin>>l>>r;
        cout<<p1[r]-p1[l-1]<<"\n";
    }
    return 0;
}