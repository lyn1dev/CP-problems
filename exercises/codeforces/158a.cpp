#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> a{};
    for (int i{}; i<n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    int answer{};
    for (int i{}; i<a.size(); i++){
        if (a[i] >= a[k-1] && (a[i] > 0)){
            answer++;
        }
    }
    cout << answer;
}
