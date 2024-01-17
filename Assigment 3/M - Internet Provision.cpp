#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define EPS 1e-7
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
const ll N = 1e9 + 5;
const int OO = 0x3f3f3f3f;
const ll LOO = 0x3f3f3f3f3f3f3f3f;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool valid(vector<double> &v, double mid,vector<double> &v1) {
    double cur = v[0]+2*mid;
    int cnt = 1;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] > cur) {
            cur = v[i] + 2 * mid;
            cnt++;
        }
    }
    if (cnt > 3) {
        return false;
    }
    return true;
}


void solve() {
    int n; cin >> n;
    set<double> st;
    double ans = 0;
    vector<double> v1(3);
    vector<double> v;
    rep(i, 0, n) {
        double x; cin >> x;
        st.insert(x);
    }
    for (auto it = st.begin(); it != st.end(); ++it) {
        v.pb(*it);
    }
    double l=0,r=N;
    while (r-l>=EPS){
        double mid=(l+r)/2;
        if(valid(v,mid ,v1)){
            ans=mid;
            r=mid;
        }else{
            l=mid;
        }
    }
    ans = l;
    int cnt = 1;
    double cur = v[0]+2*ans;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] > cur&&v[i]-cur>0.001) {
            v1[cnt]=v[i]+ans;
            cur = v[i] + 2 * ans;
            cnt++;
        }
    }
    cout<<precision(6)<<ans<<endl;
    v1[0] = v[0] + ans;
    v1[2] = v[v.size() - 1] - ans;
    cout<<v1[0]<<" "<<v1[1]<<" "<<v1[2]<<endl;

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