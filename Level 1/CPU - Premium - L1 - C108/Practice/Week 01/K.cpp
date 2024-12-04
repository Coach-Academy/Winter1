#include <iostream>
using namespace std;

int main() {
    int l, p, q;
    cin >> l >> p >> q;
    float x = p * ( l / (p + q) );
    cout << x << endl;
    return 0;
}
