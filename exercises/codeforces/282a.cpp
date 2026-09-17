#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    int x{};
    while (t--){
        string a; cin >> a;
        if (a[1] == '-'){
            --x;
        }
        else { ++x; }
    }
    cout << x;
}
