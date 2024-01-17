#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int main() {
    FIO;
    int h,n;
    cin >>h>>n;
    vector<pair<int,int>> v;
    while (n--) {
        int x,y;cin>>x>>y;
        v.emplace_back(x,y);
    }
    sort(v.begin(),v.end());
    bool flag = true;
    for(auto i:v){
        if(h>i.first){
            h+=i.second;
        }else{
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}