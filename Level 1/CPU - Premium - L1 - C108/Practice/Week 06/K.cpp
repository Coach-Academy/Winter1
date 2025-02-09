#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    int mx = ar[0], mn = ar[0];
    for(int i = 1; i < n; i++) {
        mx = max(mx, ar[i]);
        mn = min(mn, ar[i]);
    }
    int ans = 0;

    // pin Max
    for(int i = 0; i < n; i++) {
        if(ar[i] == mx) {
            while(i > 0) {
                ans++;
                swap(ar[i], ar[i - 1]);
                i--;
            }
            break;
        }
    }

    // pin Min
    for(int i = n - 1; i > 0; i--) {
        if(ar[i] == mn) {
            while(i != n - 1) {
                ans++;
                swap(ar[i], ar[i + 1]);
                i++;
            }
            break;
        }
    }

    cout << ans << endl;
    return 0;
}