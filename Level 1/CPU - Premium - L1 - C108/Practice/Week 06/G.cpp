#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ar[m];
    for(int i = 0; i < m; i++) {
        cin >> ar[i];
    }
    sort(ar, ar + m);
    int mn = INT_MAX;
    for(int i = 0; i < m; i++) {
        int j = i + n - 1;
        if(j < m) {
            mn = min(mn, ar[j] - ar[i]);
        }
    }
    cout << mn << endl;
    return 0;
}