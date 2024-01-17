#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e9;
const int mod = 1e9 + 7;

deque<int> dq;
bool rev = false;
void push_b(int x){
    if(rev){
        dq.push_front(x);
    }else{
        dq.push_back(x);
    }
}

void push_f(int x){
    if(rev){
        dq.push_back(x);
    }else{
        dq.push_front(x);
    }
}

string front(){
    string f;
    if(dq.empty()){
        f = "No job for Ada?";
    }else{
        if(rev){
            f = to_string(dq.back());
            dq.pop_back();
        }else{
            f = to_string(dq.front());
            dq.pop_front();
        }
    }
    return f;
}

string back(){
    string b;
    if(dq.empty()){
       b = "No job for Ada?";
    }else{
        if(rev){
            b= to_string(dq.front());
            dq.pop_front();
        }else{
           b = to_string(dq.back());
            dq.pop_back();
        }
    }
    return b;
}

int main() {
    FIO;
    int n;
    cin >> n;

    while (n--) {
        string q;
        int x;
        cin>>q;
        if(q=="toFront"){
            cin>>x;
            push_f(x);
        }
        if(q=="push_back"){
            cin>>x;
            push_b(x);
        }
        if(q=="front"){
            cout<<front()<<endl;
        }
        if(q=="back"){
            cout<<back()<<endl;
        }
        if(q=="reverse"){
            rev = !rev;
        }
    }

    return 0;
}