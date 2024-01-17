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
    cin.ignore();
    string str;
    getline(cin, str);
    while (n--) {
        int cnt = 0;
        map<string, int> mp;
        while (getline(cin, str)&&!str.empty()) {
            cnt++;
            mp[str]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++) {
            cout << it->first << " " << fixed << setprecision(4) << (double) it->second / cnt * 100 << "\n";
        }
        if (n) cout << "\n";
    }

    return 0;
}