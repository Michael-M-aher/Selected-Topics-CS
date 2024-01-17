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
    vector<pair<int,int>> v;
    for (int i = 0; i < n; ++i) {
        int x,y;
        cin >> x>>y;
        v.emplace_back(x,y);
    }
    sort(v.begin(),v.end());
    bool flag = false;
    for (int i = 0; i < n-1; ++i) {
        if(v[i].second > v[i+1].second){
            flag = true;
            break;
        }
    }
    if(flag) cout << "Happy Alex";
    else cout << "Poor Alex";
    return 0;
}