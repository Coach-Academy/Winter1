#include <iostream>
#include <algorithm>
using namespace std;

int dist(int ar[], int n) {
    sort(ar, ar + n);
    int cnt = 1;
    for(int i = 1; i < n; i++) {
        if(ar[i] != ar[i - 1]) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    cout << dist(ar, n) << endl;
    return 0;
}