#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; cin >> t;
    ll cap{};
    ll currentload{};
    while (t--){
        ll a, b; cin >> a >> b;
        currentload -= a;
        currentload += b;
        cap = max(cap, currentload);
    }
    cout << cap;
}
