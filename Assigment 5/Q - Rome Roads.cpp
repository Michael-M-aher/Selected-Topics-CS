#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define EPS 1e-9
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define mem(arr, x) memset(arr,x.sizeof arr)
#define endl '\n'
#define PI acos(-1)
#define Ones(n) __builtin_popcount(n)
#define Onesl(n) __builtin_popcountll(n)
#define what_is(x) cerr << #x << " is " << x << endl;
#define precision(x) fixed << setprecision(x)
#define sz(x) (int)x.size()
#define pb push_back
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rep2(i, a, b) for (int i = a; i <= b; ++i)
#define repr(i, a, b) for (int i = a; i > b; --i)
#define repr2(i, a, b) for (int i = a; i >= b; --i)
#define repit(it, x) for (auto it = x.begin(); it != x.end(); ++it)
#define reprit(it, x) for (auto it = x.rbegin(); it != x.rend(); ++it)
#define read(x, n) for (int i = 0; i < n; ++i) cin >> x[i]
#define read2(x, n, m) for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) cin >> x[i][j]
#define print(x) for (int i = 0; i < sz(x); ++i) cout << x[i] << " \n"[i == sz(x) - 1]
#define print2(x) for (int i = 0; i < sz(x); ++i) {for (int j = 0; j < sz(x[i]); ++j) cout << x[i][j] << " \n"[j == sz(x[i]) - 1];}

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
const int NINF = -1e9;
const int INF = 1e9;
int dx4[] = {0, 0, -1, 1};
int dy4[] = {-1, 1, 0, 0};
int dx8[] = {0, 0, -1, -1, -1, 1, 1, 1};
int dy8[] = {-1, 1, -1, 0, 1, -1, 0, 1};

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

vector<vi> adj;
vector<bool> vis;

vs bfs(int src){
    queue<int> q;
    vi dist(27, INF);
    vs path(27);
    q.push(src);
    dist[src] = 0;
    path[src] = char(src + 'A');
    while (!q.empty()){
        int u = q.front();
        q.pop();
        for(auto &v:adj[u]){
            if(dist[v] == INF){
                q.push(v);
                dist[v] = dist[u] + 1;
                path[v] = path[u] + char(v + 'A');
            }
        }
    }
    return path;
}


void solve() {
    int m, n; cin >> m >> n;
    adj = vvi(27);
    vis.assign(27, false);
    rep(i, 0, m){
        string str1, str2; cin >> str1 >> str2;
        int u = str1[0] - 'A';
        int v = str2[0] - 'A';
        adj[u].pb(v);
        adj[v].pb(u);
    }
    rep(i, 0, n){
        string str1, str2; cin >> str1 >> str2;
        int u = str1[0] - 'A';
        int v = str2[0] - 'A';
        vs path = bfs(u);
        cout << path[v] << endl;
    }

}


int main() {
    fast();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        if (t) cout << endl;
    }
    return 0;
}