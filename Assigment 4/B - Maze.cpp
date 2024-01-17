#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)


typedef vector<string> vs;


void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
string s = "IEHOVA#";


void back(vector<vector<char>> v, vs &ans, int x, int y, int i){
    int m = v[0].size();

    if (v[x][y] == '#') {
        return;
    }
    if (x - 1 >= 0 && v[x - 1][y] == s[i]) {
        ans[i] = "forth";
        back(v, ans, x - 1, y, i + 1);
    } else if (y + 1 < m && v[x][y + 1] == s[i]) {
        ans[i] = "right";
        back(v, ans, x, y + 1, i + 1);
    } else if (y - 1 >= 0 && v[x][y - 1] == s[i]) {
        ans[i] = "left";
        back(v, ans, x, y - 1, i + 1);
    }
}

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    vs ans(7);
    int x, y;
    rep(i, 0, n){
        rep(j, 0, m){
            cin >> v[i][j];
            if (v[i][j] == '@') {
                x = i;
                y = j;
            }
        }
    }
    back(v, ans, x, y, 0);
    rep(i, 0, 7){
        cout << ans[i];
        if(i != 6)
            cout << " ";
    }
    cout << endl;
}


int main() {
    fast();
    int t = 1;
    cin >> t;
    rep(i, 0, t)
        solve();
    return 0;
}