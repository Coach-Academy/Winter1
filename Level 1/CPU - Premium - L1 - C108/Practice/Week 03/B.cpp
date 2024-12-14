#include <iostream>
using namespace std;

int main() {
    string ans;
    for(int i = 1; i <= 26; i++) {
        int p;
        cin >> p;
        char c = 'a' + p - 1;
        ans += c;
    }
    cout << ans << endl;
    return 0;
}