#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; cin >> t;
    ll countr{};
    string a{}; cin >> a;
    for (int i{}; i<t; i++){
        if (a[i] == a[i+1]){
            countr++;
        }
    }
    cout << countr;
}
