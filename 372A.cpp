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
    vector<int> v(n);
    for (auto &i : v) cin >> i;
    sort(v.begin(), v.end());
    int s=0,e=n/2,ans=0;
    while(s<n/2 && e<n){
        if(v[e]>=v[s]*2){
            ans++;
            e++;
            s++;
        }else{
            e++;
        }
    }
    cout<<n-ans;
    return 0;
}