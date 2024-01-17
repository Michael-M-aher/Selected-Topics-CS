#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

bool ok(vector<int> a,int c,int k){
    int cnt = 1;
    int last= a[0];
    for (int i = 1; i < a.size(); ++i) {
        if(a[i]-last>=k){
            cnt++;
            last = a[i];
        }
    }
    return cnt>=c;
}

int main() {
    FIO;
    int t;cin>>t;
    while (t--){
        int n,c;cin>>n>>c;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int l=0,r=a[n-1]+1,ans = 0;
        while(l<=r){
            int mid = (l+r)/2;
            if(ok(a,c,mid)){
                ans = mid;
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}