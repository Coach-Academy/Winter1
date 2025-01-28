#include <iostream>

using namespace std;


int main() {
    int n; cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if ( (int)s.size() > 10)
            cout << s.front() << (int)s.size() - 2<< s.back() << '\n';
        else
            cout << s << '\n';
    }
    return 0;
}
