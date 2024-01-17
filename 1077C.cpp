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
    vector<int> v;
    int mx = 0,smx =0;
    ll sum=0;
    while (n--) {
        int x;cin>>x;
        v.push_back(x);
        if(x>mx){
            smx = mx;
            mx = x;
        }
        else if(x>smx){
            smx = x;
        }
        sum+=x;
    }
    vector<int> ans;
    for (int i = 0; i < v.size(); ++i) {
        int currMax = v[i]==mx?smx:mx;
        if(sum-currMax-v[i]==currMax){
            ans.push_back(i+1);
        }
    }
    cout<<ans.size()<<"\n";
    for (auto i:ans) {
        cout<<i<<" ";
    }
    return 0;
}