#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int main() {
    FIO;
    set<char> s;
    string str;cin>>str;
    for(auto i:str){
        s.insert(i);
    }
    cout<<((s.size()%2 ==0)?"CHAT WITH HER!":"IGNORE HIM!");
    return 0;
}