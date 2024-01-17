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
    queue<int> q;
    priority_queue<int,vector<int>,greater<>> pq;
    while (n--) {
        int j;cin>>j;
        if(j==1){
            int x;cin>>x;
            q.push(x);
        }else if(j==2){
            if(!pq.empty()){
                cout<<pq.top()<<"\n";
                pq.pop();
            }else{
                cout<<q.front()<<"\n";
                q.pop();
            }
        }else{
            while (!q.empty()){
                pq.push(q.front());
                q.pop();
            }
        }

    }

    return 0;
}