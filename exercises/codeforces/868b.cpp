#include <iostream>
#include <cmath>

int main(){

    int h{}, m{}, s{}, t1{}, t2{};
    std::cin >> h >> m >> s >> t1 >> t2;
    // wait this seems pretty simple
    // h m and s are the hours minutes second hands on a clock 
    // if he has to cross the hand of a clock to get from t1 to t2 then we print NO
    // if he doesnt have to cross the hand of a clock then we print YES
    // first i imagine we need the positions of m and s in h, h can stay the same
    
    double mh {m/5.0}, sh{s/5.0}; // these two are basically the positions of the minutes and seconds hand like in h
    // now if t1 or t2 is located in between h, mh or sh, like in between at least 2 of them, and t2 isnt located in the same between section, then its a NO
    

}
    