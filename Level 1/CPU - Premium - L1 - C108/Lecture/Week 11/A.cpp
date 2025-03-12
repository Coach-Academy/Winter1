#include <iostream>
using namespace std;

int sum(int ar[], int i) {
    if(i == 0) {
        return ar[i];
    }
    return ar[i] + sum(ar, i - 1);
}


int main() {
    int T;
    cin >> T;
    for(int t = 1; t <= T; t++) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        cout << "Case " << t << ": " << sum(ar, n - 1) << endl;
    }
    return 0;
}
