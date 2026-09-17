#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, m, a; cin >> n >> m >> a;
    cout << ll(ceil(static_cast<double>(n)/a)*ceil(static_cast<double>(m)/a));
}
