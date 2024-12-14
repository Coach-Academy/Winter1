#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool AlmostLucky = false;
    for(int x = 1; x <= n; x++) {
        if(n % x == 0) {
            int tmp = x;
            bool lucky = true;
            while(tmp > 0) {
                int digit = tmp % 10;
                tmp /= 10;
                if(digit != 7 && digit != 4) {
                    lucky = false;
                    break;
                }
            }
            if(lucky) {
                AlmostLucky = true;
            }
        }
    }
    if(AlmostLucky) {
        cout << "YES";
    }
    else {
        cout  << "NO";
    }
    return 0;
}