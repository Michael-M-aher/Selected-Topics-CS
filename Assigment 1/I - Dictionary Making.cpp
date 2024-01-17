#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

bool isLower(char c){
    return c-'a'>=0 && c-'a'<26;
}

int main() {
    FIO;
    map<string, int> mp;
    string str;
    while (cin>>str){
        string word;
        for (int i = 0; i < str.size(); ++i) {
            char c = tolower(str[i]);
            if(isLower(c)){
                word+=c;
            } else if(!word.empty()){
                mp[word]++;
                word="";
            }
        }
        if(!word.empty()){
            mp[word]++;
            word="";
        }
    }
    for (auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first <<"\n";
    }
    return 0;
}