#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // logn
    while(n % 10 == 0 && n > 0) {
        n /= 10;
    }
    // logn
    string s = to_string(n);
    int l = 0, r = (int)s.size() - 1;
    bool isPal = true;
    // logn
    while(l < r) {
        if(s[l] != s[r]) {
            isPal = false;
        }
        l++;
        r--;
    }
    if(isPal) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}