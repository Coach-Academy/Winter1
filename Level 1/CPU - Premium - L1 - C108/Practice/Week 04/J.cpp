#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    int mn = ar[0];
    int mx = ar[0];
    for(int i = 0; i < n; i++) {
        if(ar[i] > mx) {
            mx = ar[i];
        }
        if(ar[i] < mn) {
            mn = ar[i];
        }
    }
    int ans = 0;
    int mnPos;
    int mxPos;
    for(int i = 0; i < n; i++) {
        if(ar[i] == mx) {
            mxPos = i;
            break;
        }
        ans++;
    }
    for(int i = n - 1; i >= 0; i--) {
        if(ar[i] == mn) {
            mnPos = i;
            break;
        }
        ans++;
    }
    if(mnPos < mxPos) {
        ans--;
    }
    cout << ans << endl;
    return 0;
}