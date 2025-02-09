#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 4;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    int ans = 0;
    for(int i = 1; i < n; i++) {
        if(ar[i] == ar[i - 1]) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}