#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

bool isPlus(char c){
    return (c=='+');
}

int main() {
    FIO;
    string str;cin>>str;
    int t;
    cin >> t;
    int *arr = new int[str.size()];
    arr[0]=0;
    for (int i = 1; i < str.size(); ++i) {
        arr[i] = arr[i-1] +(str[i]==str[i-1]);
    }
    while (t--){
        int l,r;cin>>l>>r;
        cout<<arr[r-1]-arr[l-1]<<"\n";
    }

    return 0;
}