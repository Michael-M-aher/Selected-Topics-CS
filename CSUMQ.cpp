#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

int main() {
    FIO;
    int n;
    cin >> n;
    int *arr = new int[n],*accSum = new int[n];

    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    accSum[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        accSum[i] = accSum[i-1]+arr[i];
    }
    int q;
    cin >> q;
    while (q--) {
        int x,y;cin>>x>>y;
        int s = x-1;
        if (s<0){
            cout<<accSum[y]<<"\n";
        } else{
            cout<<accSum[y]-accSum[s]<<"\n";
        }

    }

    return 0;
}