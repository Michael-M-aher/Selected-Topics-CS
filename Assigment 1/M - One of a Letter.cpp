#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int main() {
    FIO;
    string s;getline(cin,s);
    map<char,int> mp;
    for (int i = 0; i < s.size(); ++i) {
        int c = s[i]-'a';
        if(c>=0 && c<26)
            mp[s[i]]++;
    }
    cout<<mp.size();

    return 0;
}