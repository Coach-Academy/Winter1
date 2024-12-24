#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int d[n];
    for(int i = 0; i < n - 1; i++) {
        cin >> d[i];
    }
    int a, b;
    cin >> a >> b;
    int ans = 0;

    for(int i = a; i < b; i++) {
        ans += d[i - 1];
    }

    cout << ans << endl;
    return 0;
}