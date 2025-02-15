#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int top;
    cin >> top;
    int op = 7 - top;
    bool flag = true;
    for(int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        if(l == top || l == op || r == top || r == op) {
            flag = false;
        }
    }
    if(flag) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}