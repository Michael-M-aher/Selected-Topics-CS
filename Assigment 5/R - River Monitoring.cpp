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

int n, e;
vector<vi> adj;
vector<bool> vis;

void inp(){
    cin >> n >> e;

    rep(i, 0, e){
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
}

int dfs(int u){
    vis[u] = true;
    int cnt = 1;
    for(auto v: adj[u]){
        if(!vis[v]){
            cnt+=dfs(v);
        }
    }
    return cnt;
}

void solve() {
    int n;
    while (cin>>n && n){
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        int x, y;
        vector<pii> v(n);
        rep(i, 0, n){
            ss>>x>>y;
            v[i] = {x, y};
        }
        adj = vvi(n);
        vis.assign(n, false);
        rep(i,0,n){
            int mn1=0, mn2=0,mnDist1=INF, mnDist2=INF;
            rep(j,1,n){
                int dist = pow(v[i].fi-v[j].fi,2)+pow(v[i].se-v[j].se,2);
                if(dist<mnDist1){
                    mn2 = mn1;
                    mnDist2 = mnDist1;
                    mn1 = j;
                    mnDist1 = dist;
                }else if(dist==mnDist1){
                    if(v[j].first<v[mn1].first || (v[j].first==v[mn1].first && v[j].second<v[mn1].second)){
                        mn2 = mn1;
                        mnDist2 = mnDist1;
                        mn1 = j;
                        mnDist1 = dist;
                    }
                }
                else if(dist<mnDist2){
                    mn2 = j;
                    mnDist2 = dist;
                }else if(dist==mnDist2){
                    if(v[j].first<v[mn2].first || (v[j].first==v[mn2].first && v[j].second<v[mn2].second)){
                        mn2 = j;
                        mnDist2 = dist;
                    }
                }
            }
            adj[i].pb(mn1);
            adj[i].pb(mn2);
        }
        cout<<(dfs(0)==n?"All stations are reachable.":"There are stations that are unreachable.")<<endl;
    }
}


int main() {
    fast();
    int t = 1;
//    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}