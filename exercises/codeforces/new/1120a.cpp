#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i{}; i<t; i++){
        int numMoves{};
        cin >> numMoves;
        int zeros{}, ones{};

        for (int x{}; x<numMoves; x++){
            int y{};
            cin >> y;
            if (y == 0){
                zeros += 1;
            }
            else { ones += 1; }
        }

        if (ones >= zeros){
            cout << "Bessie" << "\n"; 
        }
        else { cout << "Elsie" << "\n"; }

    }
    return 0;
}
