#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll a, b; cin >> a >> b;
    ll years{};
    while (a<=b){
        a *=3; b*=2;
        years++;
    }
    cout << years;
}
