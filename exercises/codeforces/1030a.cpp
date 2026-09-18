#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; cin >> t;
    bool isHard{false};
    while (t--){
        ll x; cin >> x;
        if (x>0){ isHard = true; }
    }
    if (isHard == true){
        cout << "HARD";
    }
    else cout << "EASY";
}
