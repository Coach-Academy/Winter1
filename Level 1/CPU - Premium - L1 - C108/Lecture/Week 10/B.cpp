#include <iostream>
#include <map>
using namespace std;

int main() {
    map< string , int > mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        if(mp.find(s) == mp.end()) {
            mp[s] = 1;
            cout << "OK" << endl;
        }
        else {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }
    return 0;
}
