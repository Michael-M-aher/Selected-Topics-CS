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
    map<string, string> mp;
    set<string> usernames;
    while (n--) {
        string old, new_;
        cin >> old >> new_;
        if (usernames.find(new_) == usernames.end()) {
            if (mp.find(old) == mp.end()) {
                mp[new_] = old;
                usernames.insert(new_);
            } else {
                mp[new_] = mp[old];
                mp.erase(old);
                usernames.erase(old);
                usernames.insert(new_);
            }
        }
    }
    cout << mp.size() << '\n';
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->second << ' ' << it->first << '\n';
    }

    return 0;
}