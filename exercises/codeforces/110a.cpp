#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll x; cin >> x;
    ll luckycount{};
    while (x>0){
        if ((x%10==4) || (x%10==7)) luckycount++;
        x /=10;
    }
    if ((luckycount == 4) || (luckycount == 7)) cout << "YES";
    else cout << "NO";
}
