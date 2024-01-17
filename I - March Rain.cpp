#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

bool ok(vector<int> v,int k, int len){
    int start = v[0];
    int cnt = 1;
    for (int i = 0; i < v.size(); ++i) {
        if(v[i] - start+1 > len){
            cnt++;
            start = v[i];
        }
    }
    return cnt <= k;
}

int main() {
    FIO;
    int t;
    cin >> t;
    while (t--) {
        int n,k;cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        int l = 1, r = v[n-1]+1;
        while(l<=r){
            int mid = (l+r)/2;
            if(ok(v,k,mid)){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        cout << l << "\n";
    }

    return 0;
}