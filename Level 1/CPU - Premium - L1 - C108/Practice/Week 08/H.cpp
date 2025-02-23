#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        int last = n + 1;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'A') {
                last = i;
            }
            else {
                ans = max(ans, i - last);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
