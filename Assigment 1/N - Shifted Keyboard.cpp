#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int main() {
    FIO;
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    map<char, char> l,r;
    for (int i = 0; i < keyboard.size(); ++i) {
        if(i) l[keyboard[i]] = keyboard[i-1];
        if(i < keyboard.size()-1) r[keyboard[i]] = keyboard[i+1];
    }
    char c;cin>>c;
    string s;cin>>s;
    for (int i = 0; i < s.size(); ++i) {
        if(c == 'R') cout<<l[s[i]];
        else cout<<r[s[i]];
    }

    return 0;
}