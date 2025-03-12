#include <iostream>
using namespace std;

// https://vjudge.net/problem/SPOJ-TRUCKL
int rec(int n, int m) {
    if(n <= m) {
        return 1;
    }
    return rec(n / 2, m) + rec((n + 1) / 2, m);
}

int main() {
    int n, m;
    while(cin >> n >> m) {
        cout << rec(n, m) << endl;
    }
    return 0;
}
