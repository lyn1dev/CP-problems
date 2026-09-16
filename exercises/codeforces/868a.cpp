#include <iostream>
#include <string>

int main(){

    std::string pass{};
    std::cin >> pass;
    long long x{};  
    std::cin >> x;

    bool match{false};
    bool first{false};
    bool last{false};

    for (long long i{}; i<x; ++i){
        std::string P{};
        std::cin >> P;
        if (P == pass){
            match = true;
        }
        if (P[1] == pass[0]){
            first = true;
        }
        if (pass[1] == P[0]){
            last = true;
        }
    }

    if (match == true || (first&&last)){
        std::cout << "YES";
    }
    else {std::cout << "NO";}

}
