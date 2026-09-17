#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll k; cin >> k;
    ll v1{}, v2{}, v3{};
    while (k--){
        ll x, y, z; cin >> x >> y >> z;
        v1 +=x; v2+=y; v3+=z;
    }
    if (v1==0 && v2==0 && v3==0){
        cout << "YES";
    }
    else cout << "NO";

}
