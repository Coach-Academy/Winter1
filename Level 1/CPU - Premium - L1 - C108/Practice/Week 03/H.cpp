#include <iostream>
using namespace std;

int main() {
    int ans = 0;
    for(int x1 = 1; x1 <= 5; x1++) {
        for(int y1 = 1; y1 <= 5; y1++) {
            int cell;
            cin >> cell;
            if(cell == 1) {
                if(x1 <= 3) {
                    ans += 3 - x1;
                }
                else {
                    ans += x1 - 3;
                }

                if(y1 <= 3) {
                    ans += 3 - y1;
                }
                else {
                    ans += y1 - 3;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}