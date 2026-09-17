#include <bits/stdc++.h>
using namespace std;

int main() {

    int x1{};
    int y1{};
    for (int i{1}; i<=5; i++){
        for (int j{1}; j<=5; j++){
            int x; cin >> x; if (x==1){ x1 = j; y1 = i;}
        }
    }
    cout << abs(3-x1) + abs(3-y1);
}
