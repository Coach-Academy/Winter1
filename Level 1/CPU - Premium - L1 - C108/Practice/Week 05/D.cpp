#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int t = 1; t <= T; t++) {
        string b;
        cin >> b;
        string a;
        for(int i = 0; i < b.size(); i += 2) {
            a += b[i];
        }
        a += b.back();
        cout << a << endl;
    }
    return 0;
}