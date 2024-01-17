#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e5 + 5;
const int mod = 1e9 + 7;
int freq[N];

int main() {
    FIO;
    int n,x;cin >> n;
    int mx =0,num=0;
    while (cin>>x) {
        if(freq[x]>0){
            mx = max(mx,num);
            freq[x]--;
            num--;
        }else{
            freq[x]++;
            num++;
        }
    }
    cout<<mx;

    return 0;
}