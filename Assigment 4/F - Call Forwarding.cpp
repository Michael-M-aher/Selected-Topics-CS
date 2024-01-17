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
typedef vector<ll> vl;
typedef vector<string> vs;
const ll MOD = 1e9 + 7;
const ll N = 2e5 + 5;
const int OO = 0x3f3f3f3f;
const ll LOO = 0x3f3f3f3f3f3f3f3f;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int dfs(unordered_map<int,map<int,pii>> &mp,set<int> &vs,int src,int time) {
    if (vs.find(src) != vs.end()) return 9999;
    vs.insert(src);
    if(mp[src].count(time)){
        return dfs(mp,vs,mp[src][time].se,time);
    }
    auto it = mp[src].upper_bound(time);
    if(it != mp[src].begin()){
        --it;
        if(time <= it->first+it->second.fi){
            return dfs(mp,vs,it->second.se,time);
        }
    }
    return src;
}


void solve() {
    int src,time,dur,dest;
    unordered_map<int,map<int,pii>> mp;
    while (cin >> src && src != 0) {
        cin >> time >> dur >> dest;
        mp[src][time] = {dur,dest};
    }
    while (cin>>time && time != 9000){
        cin >> src;
        set<int> vs;
        int ans = dfs(mp,vs,src,time);
        cout<<"AT "<<setw(4)<<setfill('0')<<time<<" CALL TO "<<setw(4)<<setfill('0')<<src<<" RINGS "<<setw(4)<<setfill('0')<<ans<<endl;
    }
}


int main() {
    fast();
    int t = 1;
    cin >> t;
    cout<<"CALL FORWARDING OUTPUT"<<endl;
    rep(i, 0, t) {
        cout<<"SYSTEM "<<i+1<<endl;
        solve();
    }
    cout<<"END OF OUTPUT\n";
    return 0;
}