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
    stack<int> s;
    while (n--) {
        int q;
        cin>>q;
        if(q==1){
            int x;
            cin>>x;
            s.push(x);
        }else if(q==2){
            if(!s.empty())
             s.pop();
        }else{
            cout<<(s.empty()?"Empty!": to_string(s.top()))<<"\n";
        }
    }

    return 0;
}