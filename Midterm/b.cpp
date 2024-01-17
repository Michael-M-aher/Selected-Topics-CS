#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int main() {
    FIO;
    int n,t ;
    cin >>n>> t;
    vector<int> time(n),x(n),presumt(n+1),presumx(n+1);

    for (int i = 0; i < n; ++i) {
        cin >> time[i];
        presumt[i+1]+=(presumt[i]+ time[i]);
    }
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
        presumx[i+1]+=(presumx[i]+ x[i]);
    }
    int s=0,e=0,mx=0,mxs=0,mxe=0;
    while (s<=n){
        while(e <n &&presumt[e+1]-presumt[s]<=t){
//            cout<<presumt[e+1]<<" " <<presumt[s]<<"\n";
            e++;
        }
//        cout<<"\ns "<<s<<" e "<<e<<"\n";
        if(mx<presumx[e]-presumx[s]){
//            cout<<presumx[e]<<" "<<presumx[s]<<"\n";
            mx = presumx[e]-presumx[s];
            mxs = s;
            mxe = e;
        }
        s++;
    }

    cout<<mxs+1<<" "<<mxe;

    return 0;
}