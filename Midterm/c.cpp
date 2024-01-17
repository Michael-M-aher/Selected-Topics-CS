#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;


int main() {
    FIO;
    ll t;cin>>t;
    ll l = 1,r = 1e15+5,ans = 0;
    while (l <=r){
        ll mid = (l+r)/2;
        ll f = 314*mid+4;
        if(f == t){
            ans = mid;
            break;
        }
        else if(f > t){
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    cout<<ans;
    return 0;
}