#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; cin >> t;
    ll suitablerooms{};
    while (t--){
        int p, q; cin >> p >> q;
        if ((q-p)>=2) suitablerooms++;
    }
    cout << suitablerooms;
}
