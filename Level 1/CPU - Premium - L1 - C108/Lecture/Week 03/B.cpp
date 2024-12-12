#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        int x;
        cin >> x;
        if(x > 24) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
    return 0;
}