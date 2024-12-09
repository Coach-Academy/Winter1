#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long len = (n + a - 1) / a;
    long long wid = (m + a - 1) / a;
    cout << len * wid;
    return 0;
}
