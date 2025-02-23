#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    vector< int > a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = INT_MAX;
    for(int i = 0; i + 1 < n; i++) {
        if(s[i] == 'R' && s[i + 1] == 'L') {
            ans = min(ans, (a[i + 1] - a[i]) / 2);
        }
    }
    cout << (ans == INT_MAX ? -1 : ans) << endl;
    return 0;
}
