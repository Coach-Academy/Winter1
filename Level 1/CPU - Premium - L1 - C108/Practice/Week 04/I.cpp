#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int w,j;
        cin >> w >> j;
        w--;
        int before = j - 1;
        int after = ar[w] - j;
        ar[w] = 0;
        if(w != 0) {
            ar[w - 1] += before;
        }
        if(w != n - 1) {
            ar[w + 1] += after;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << ar[i] << endl;
    }
    return 0;
}