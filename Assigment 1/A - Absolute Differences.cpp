#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 2e5 +5;
const int mod = 1e9 + 7;

int main() {
    FIO;
    int n;
    while (cin>>n){
        vector<int> v(n);
        vector<bool> vis(n, false);
        bool ans = true;
        for (int i = 0; i < n; ++i) {
            int x;cin>>x;
            v[i] = x;
        }
        for(int i = 1; i < n; ++i){
            int dif = abs(v[i]-v[i-1]);
            if(dif > (n-1) || dif == 0|| vis[dif]){
                ans = false;
                break;
            }
            vis[dif] = true;
        }
        for (int i = 1; i < n; ++i) {
            if(!vis[i]) ans = false;
        }
        cout<<(ans?"Jolly":"Not jolly")<<"\n";
    }
    return 0;
}