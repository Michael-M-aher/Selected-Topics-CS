#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int psum[505][505];

int main() {
    FIO;
    int w,h,n;
    while(cin>>w>>h>>n,w){
        for(int i=0;i<n;++i){
            int x1 ,y1 ,x2 ,y2;
            cin>>x1>>y1>>x2>>y2;
            if(x1>x2)swap(x1,x2);
            if(y1>y2)swap(y1,y2);
            psum[x1][y1]++;
            psum[x1][y2+1]--;
            psum[x2+1][y1]--;
            psum[x2+1][y2+1]++;
        }
        for(int i=1;i<=w;++i){
            for(int j=1;j<=h;++j){
                psum[i][j] += psum[i-1][j] + psum[i][j-1] - psum[i-1][j-1];
            }
        }
        ll ans = 0;
        for(int i=1;i<=w;++i){
            for(int j=1;j<=h;++j){
                if(psum[i][j]==0)ans++;
            }
        }
        if(ans==0)cout<<"There is no empty spots.\n";
        else if(ans==1)cout<<"There is one empty spot.\n";
        else cout<<"There are "<<ans<<" empty spots.\n";
        memset(psum,0,sizeof(psum));
    }
    return 0;
}