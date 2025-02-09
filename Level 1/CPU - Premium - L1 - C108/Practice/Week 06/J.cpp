#include <iostream>
#include <algorithm>
using namespace std;

bool isEqual(int ar1[], int ar2[], int n) {
    for(int i = 0; i < n; i++) {
        if(ar1[i] != ar2[i]) {
            return false;
        }
    }
    return true;
}


int main() {
    int n;
    cin >> n;
    int p[n], q[n], perm[n];
    for(int i = 0; i < n; i++) {
        cin >> p[i];
        perm[i] = i + 1;
    }
    for(int i = 0; i < n; i++) {
        cin >> q[i];
    }

    int cnt = 0;
    int a,b;
    do {
        cnt++;
        if(isEqual(p, perm, n)) {
            a = cnt;
        }
        if(isEqual(q, perm, n)) {
            b = cnt;
        }
    } while(next_permutation(perm, perm + n));

    cout << abs(a - b) << endl;
    return 0;
}