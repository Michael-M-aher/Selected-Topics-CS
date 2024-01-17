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
    map<string,int> mp;
    while (n--) {
        string name;cin>>name;
        if(mp.find(name) == mp.end()){
            mp[name] = 0;
            cout<<"OK\n";
        }else{
            cout<<name<<++mp[name]<<"\n";
        }
    }
    return 0;
}