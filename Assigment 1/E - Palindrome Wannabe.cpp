#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int main() {
    FIO;
    string str;cin>>str;
    int front = 0, back = 0;
    for (int i = 0; i < (int)str.size(); ++i) {
        if(str[i] != '0'){
            break;
        }
        front++;
    }
    for (int i = (int)str.size()-1; i >= 0 ; --i) {
        if(str[i] != '0'){
            break;
        }
        back++;
    }
    if(front > back) {
        cout << "NO";
        return 0;
    }
    string sub = str.substr(front, (int)str.size() - back - front);
    for (int i = 0; i < sub.size()/2; ++i) {
        if(sub[i] != sub[sub.size()-1-i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}