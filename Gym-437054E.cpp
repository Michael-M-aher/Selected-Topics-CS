#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int n;
string str;

set<string> st;

void backTrack(string s){
    if(s.size() > n)return;
    st.insert(s);
    for(int i = 0; i < (int)str.size(); ++i){
        backTrack(s + str[i]);
    }
}

int main() {
    FIO;
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        st.clear();
        cin >> n;
        cin >> str;
        cout << "Case " << i + 1 << ":";
        backTrack("");
        for(auto it : st){
            cout << it << "\n";
        }
    }

    return 0;
}