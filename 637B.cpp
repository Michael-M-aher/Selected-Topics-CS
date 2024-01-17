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
    stack<string> st;
    set<string> s;
    while (n--) {
        string str;cin>>str;
        st.push(str);
    }
    while (!st.empty()){
        if(s.find(st.top()) == s.end()){
            s.insert(st.top());
            cout<<st.top()<<"\n";
            st.pop();
        }else{
            st.pop();
        }
    }
    return 0;
}