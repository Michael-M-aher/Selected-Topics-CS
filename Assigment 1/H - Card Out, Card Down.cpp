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
    while (cin >> n,n){
        deque<int> dq;
        for (int i = 1; i <= n; ++i) dq.push_back(i);
        cout << "Discarded cards:";
        while (dq.size() > 1){
            cout << " " << dq.front();
            dq.pop_front();
            dq.push_back(dq.front());
            dq.pop_front();
            if (dq.size() > 1) cout << ",";
        }
        cout << "\nRemaining card: " << dq.front() << "\n";
    }
    return 0;
}