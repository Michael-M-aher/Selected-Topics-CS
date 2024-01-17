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
    while (n--) {
        map<int,int> mp;
        int x,y;cin>>x>>y;
        for (int i = 0; i < x+y; ++i) {
            int num;cin>>num;
            mp[num]++;
        }
        int ans =0;
        for (auto [i,j]:mp) {
            if(j>1)
                ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}