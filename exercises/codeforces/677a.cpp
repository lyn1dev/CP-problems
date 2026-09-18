#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll h, t; cin >> t >> h;
    ll countr{};
    while (t--){
        int n; cin >> n;
        if (n>h){
            countr +=2;
        }
        else countr +=1;
    }
    cout << countr;
}
