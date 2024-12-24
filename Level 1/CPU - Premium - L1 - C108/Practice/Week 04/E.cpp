#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(ar[i] >= ar[k - 1] && ar[i] > 0) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}