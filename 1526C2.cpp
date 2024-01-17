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
    priority_queue<int,vector<int>,greater<>> pq;
    ll sum =0,num = 0;
    while (n--) {
        int x;cin>>x;
        pq.push(x);
        sum+=x;
        num++;
        if(sum < 0){
            sum -= pq.top();
            pq.pop();
            num--;
        }
    }
    cout<<num;
    return 0;
}