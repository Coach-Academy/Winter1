#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];
    int mn = INT_MAX;
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
        mn = min(mn, ar[i]);
    }
    if(mn == 1) {
        cout << -1;
    }
    else {
        cout << 1;
    }
    return 0;
}