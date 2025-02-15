#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    // O(n logn)
    for(int t = 1; t <= T; t++) {
        int n, d;
        cin >> n >> d;
        int ar[n];
        for(int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        if(ar[n - 1] <= d || ar[0] + ar[1] <= d) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << endl;
    }
    // More faster O(n)
//    for(int t = 1; t <= T; t++) {
//        int n, d;
//        cin >> n >> d;
//        int ar[n];
//        int mx = 0;
//        int mn = INT_MAX;
//        int nxtMin = INT_MAX;
//        for(int i = 0; i < n; i++) {
//            cin >> ar[i];
//            mx = max(mx, ar[i]);
//            if(ar[i] <= mn) {
//                nxtMin = mn;
//                mn = ar[i];
//            }
//            else if(ar[i] <= nxtMin) {
//                nxtMin = ar[i];
//            }
//        }
//        if(mx <= d || mn + nxtMin <= d) {
//            cout << "YES";
//        }
//        else {
//            cout << "NO";
//        }
//        cout << endl;
//    }
    return 0;
}