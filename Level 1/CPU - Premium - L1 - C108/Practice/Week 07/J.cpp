#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
        sum += ar[i];
    }
    long long x;
    cin >> x;
    long long steps = x / sum;
    long long ans = steps * n;
    sum = sum * steps;
    int pos = 0;
    while(sum <= x) {
        sum += ar[pos];
        pos++;
        ans++;
    }
    cout << ans << endl;
    return 0;
}