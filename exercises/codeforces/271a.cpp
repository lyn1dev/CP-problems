#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll x; cin >> x;
    while (true){
        x++;
        if (x/1000!=(x/100)%10 && x/1000!=(x/10)%10 && x/1000!=x%10 && (x/100)%10!=(x/10)%10 && (x/100)%10!=x%10 && (x/10)%10!=x%10) break;
    }
    cout << x;
}
