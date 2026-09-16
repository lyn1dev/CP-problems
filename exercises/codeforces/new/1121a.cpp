#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i{}; i<t; i++){

        int x{}; cin >>x;
        vector<int> p{};
        for (int j{}; j<x; j++){
            // read the permutation?
            int a{}; cin >> a; p.push_back(a); // example 4, 2, 3, 1
        }
                // NOW WE have a permutation, i get the correct permutation to compare it with

        vector<int> p2{};
        for (int j{1}; j<=p.size(); j++){
            
            p2.push_back(j); // this should be the correct permutation // example 1, 2, 3, 4
        }

        vector<int> p3{}; // collection of mismatches
        for (int j{}; j<p.size(); j++){
            if (p[j] != p2[j]) {
                p3.push_back(p[j]);
            }
            
        }

        // now sort the vector p3 in ascending, then place p3's items back into p, check if p is now in ascending

    }
    return 0;
}
