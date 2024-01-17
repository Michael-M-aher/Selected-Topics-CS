#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int main() {
    FIO;
    int n,m;
    cin >> n>>m;
    vector<int>cap(n);
    for (int i = 0; i < n; ++i) {
        cin>>cap[i];
    }
    sort(cap.begin(),cap.end());
    while (m--){
        string reser;cin>>reser;
        if(reser == "reserve"){
            for (int i = 0; i < n; ++i) {
                if(cap[i]!=0){
                    cap[i]--;
                    cout<<i+1<<"\n";
                    break;
                }
            }
        } else{
            int k;cin>>k;
            cap[k-1]++;
        }
    }

    return 0;
}