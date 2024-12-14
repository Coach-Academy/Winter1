#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    int req = 0;
    for(int level = 1; ; level++) {
        req += level;
        // ??
        // int req = 0;
        // for(int i = 1; i <= level; i++) {
        //     req += i;
        // }
        if(n >= req) {
            n -= req;
            ans++;
        }
        else {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}