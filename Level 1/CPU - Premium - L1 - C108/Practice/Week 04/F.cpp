#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int t = 1; t <= T; t++) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = 0;
        int mn = a[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            if(a[i] <= mn) {
                mn = a[i];
            }
            else {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}