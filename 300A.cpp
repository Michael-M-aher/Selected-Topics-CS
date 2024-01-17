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
    vector<int> v1,v2,v3;
    while (n--) {
        int x;
        cin >>x;
        if(x<0){
            v1.push_back(x);
        }else if(x > 0){
            v2.push_back(x);
        }else{
           v3.push_back(x);
        };
    }
    if(v2.empty()){
        v2.push_back(v1.back());
        v1.pop_back();
        v2.push_back(v1.back());
        v1.pop_back();
    }
    if(v1.size()%2 == 0){
        v3.push_back(v1.back());
        v1.pop_back();
    }
    cout<<v1.size()<<" ";
    for(auto i:v1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<v2.size()<<" ";
    for(auto i:v2){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<v3.size()<<" ";
    for(auto i:v3){
        cout<<i<<" ";
    }
    return 0;
}