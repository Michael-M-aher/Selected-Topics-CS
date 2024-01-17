#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'
#define sz(x) (int)x.size()
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; ++i)

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<bool> vb;
const ll MOD = 1e9 + 7;
const ll N = 2e5 + 5;
const int OO = 0x3f3f3f3f;
const ll LOO = 0x3f3f3f3f3f3f3f3f;
int dx4[] = {0, 0, -1, 1};
int dy4[] = {-1, 1, 0, 0};
int dx8[] = {0, 0, -1, -1, -1, 1, 1, 1};
int dy8[] = {-1, 1, -1, 0, 1, -1, 0, 1};

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void dfs(vvi &adj,int i,int j,int &ans){
    adj[i][j] = -1;
    ans++;
    rep(k,0,4){
        int x = i+dx4[k];
        int y = j+dy4[k];
        if(x>=0 && x<sz(adj) && y>=0 && y<sz(adj[0]) && adj[x][y] == 0){
            dfs(adj,x,y,ans);
        }
    }
}

void solve() {
    int x,y; cin>>x>>y;
    cin.ignore();
    string str;
    vs v;
    while (getline(cin,str) && str!=""){
        v.pb(str);
    }
    int m = sz(v)+2;
    int n = sz(v[0])+2;
    vvi adj(m,vi(n,1));
    rep(i,1,m-1){
        rep(j,1,n-1){
            adj[i][j] = v[i-1][j-1]-'0';
        }
    }
    int ans = 0;
    dfs(adj,x,y,ans);
    cout<<ans<<endl;
}


int main() {
    fast();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        if(t) cout<<endl;
    }
    return 0;
}