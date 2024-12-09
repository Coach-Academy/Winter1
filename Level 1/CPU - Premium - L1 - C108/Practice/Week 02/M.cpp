#include <iostream>
using namespace std;

int main() {
    int V,S,T,D;
    cin >> V >> S >> T >> D;
    float t = 1.0 * D / V;
    // [S <= t <= T]
    if(S <= t && t <= T) {
        cout << "No";
    }
    else {
        cout << "Yes";
    }
    return 0;
}
