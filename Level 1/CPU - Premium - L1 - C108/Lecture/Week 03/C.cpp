#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        int h, x, y;
        cin >> h >> x >> y;

        int ans = 1;
        h -= y;
        while(h > 0) {
            ans++;
            h -= x;
        }

        cout << ans << endl;
    }
    return 0;
}