#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int main() {
    FIO;
    int n,r;
    cin >> n>>r;
    queue<int> q;
    while (n--) {
        int x;
        cin>>x;
        q.push(x);
    }
    while(r--){
        int x = q.front();
        q.pop();
        q.push(x);
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}