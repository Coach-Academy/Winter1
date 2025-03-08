#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    char dir;
    cin >> dir;
    string keyboard = " qwertyuiopasdfghjkl;zxcvbnm,./ ";
    map< char , char > mp;
    // O(m * log(m) + n * log(m))
    for(int i = 1; i < (int)keyboard.size() - 1; i++) {
        if(dir == 'R') {
            mp[keyboard[i]] = keyboard[i - 1];
        }
        else {
            mp[keyboard[i]] = keyboard[i + 1];
        }
    }
//    vector< char > mp(256);
//    // O(256 + m + n)
//    for(int i = 1; i < (int)keyboard.size() - 1; i++) {
//        if(dir == 'R') {
//            mp[keyboard[i]] = keyboard[i - 1];
//        }
//        else {
//            mp[keyboard[i]] = keyboard[i + 1];
//        }
//    }
    string s;
    cin >> s;
    for(int i = 0; i < (int)s.size(); i++) {
        cout << mp[s[i]];
    }
    return 0;
}
