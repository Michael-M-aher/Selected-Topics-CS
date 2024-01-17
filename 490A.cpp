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
    vector<int> v1,v2,v3;
    for (int i = 0; i < n; ++i) {
        int x;cin>>x;
        if(x==1){
            v1.push_back(i+1);
        }else if(x==2){
            v2.push_back(i+1);
        }else{
            v3.push_back(i+1);
        }
    }
    int tmp = (int)min(v1.size(),v2.size());
    int g = (int)min(tmp,(int)v3.size());
    cout<<g<<"\n";
    for (int i = 0; i < g; ++i) {
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<"\n";
    }
    return 0;
}