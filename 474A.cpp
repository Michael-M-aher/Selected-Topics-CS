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
    string ans="";
    map<char,int> mp;
    for (int i = 0; i < keyboard.size(); ++i) {
        mp[keyboard[i]] = i;
    }
    char p;cin>>p;
    string x;cin>>x;
    for (auto i:x) {
        ans+=keyboard[(p=='L'?mp[i]+1:mp[i]-1)];

    }
    cout<<ans;
    return 0;
}