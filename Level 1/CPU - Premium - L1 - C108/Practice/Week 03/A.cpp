#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << sum << endl;
    // cout << n * (n + 1) / 2 << endl;
    return 0;
}