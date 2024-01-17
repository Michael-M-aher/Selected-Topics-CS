#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 205;
const int mod = 1e9 + 7;
int fre[128];
char h[N],n[N];


int main() {
    FIO;
    cin.getline(h,N);
    cin.getline(n,N);
    for (int i = 0; h[i]; ++i) {
        if(h[i]==' ')continue;
        fre[h[i]-'A']++;
    }
    for (int i = 0; n[i]; ++i) {
        if(n[i]==' ')continue;
        fre[n[i]-'A']--;
        if(fre[n[i]-'A'] < 0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}