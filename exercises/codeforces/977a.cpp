#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll x, k; cin >> x >> k;
    while (k--){
        if (x%10==0){
            x /=10;
        }
        else {
            x--;
        }
    }
    cout << x;

}
