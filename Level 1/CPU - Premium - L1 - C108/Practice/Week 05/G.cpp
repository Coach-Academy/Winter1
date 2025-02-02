#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        bool found = true;
        for(char dig = '0'; dig <= '0' + k; dig++) {
            if(s.find(dig) == -1) {
                found = false;
                break;
            }
        }
        if(found) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}