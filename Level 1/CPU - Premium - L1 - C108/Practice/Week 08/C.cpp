#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector< int > a[4];
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[x].push_back(i + 1);
    }
    int mn = min({(int)a[1].size(), (int)a[2].size(), (int)a[3].size()});
    cout << mn << endl;
    for(int i = 0; i < mn; i++) {
        cout << a[1][i] << ' ' << a[2][i] << ' ' << a[3][i] << endl;
    }
    return 0;
}
