#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int n, k, x;
    cin >> n >> k >> x;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    for(int i = n - k; i < n; i++) {
        ar[i] = x;
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += ar[i];
    }
    cout << sum << endl;
    // cout << accumulate(ar, ar + n, 0) << endl;
    return 0;
}