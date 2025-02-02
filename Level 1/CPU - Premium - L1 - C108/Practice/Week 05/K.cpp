#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for(char sml = 'a', cap = 'A'; sml <= 'z' && cap <= 'Z'; sml++, cap++) {
        for(int j = 0; j < n; j++) {
            if(s[j] == sml || s[j] == cap) {
                cnt++;
                break;
            }
        }
    }
    if(cnt == 26) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}