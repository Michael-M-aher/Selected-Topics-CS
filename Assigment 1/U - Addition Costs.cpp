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
    while (cin>>n,n){
        priority_queue<int,vector<int>,greater<int>> pq;
        for (int i = 0; i < n; ++i){
            int x;
            cin>>x;
            pq.push(x);
        }
        int ans = 0;
        while (pq.size() > 1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            ans += x + y;
            pq.push(x + y);
        }
        cout<<ans<<"\n";
    }

    return 0;
}