#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cap = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        cnt -= a;
        cnt += b;
        cap = max(cap, cnt);
    }
    cout << cap << endl;
    return 0;
}