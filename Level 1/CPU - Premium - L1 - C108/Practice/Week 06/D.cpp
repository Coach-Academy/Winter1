#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[n], df[n];
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        sum += a[i];
        df[i] = b[i] - a[i];
    }
    sort(df, df + n);
    int ans = 0;
    for(int i = 0; i < n && sum > m; i++) {
        sum += df[i];
        ans++;
    }
    if(sum <= m) {
        cout << ans << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}