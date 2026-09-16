#include <iostream>

int main() {

    int n{}, g{};
    std::cin >> n >> g;
    int total{};

    for (int i{}; i<n; ++i){
        int a{};
        std::cin >> a;
        total = total+a;
    }

    // i can use g/8 + 1 if(g%8==0) for number of days needed   
    int daysNeed{};
    if (g%8 == 0){ daysNeed = g/8; }
    else {daysNeed = (g/8) +1; }

    // and if n > g/8 + 1 then print -1
    if (n > daysNeed or total < g) { std::cout << "-1"; }
    else { std::cout << daysNeed; }
    // and if n <= g/8 + 1 AND total >= g then print g/8+1

}
