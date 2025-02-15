#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int one = count(s.begin(), s.end(), '1');
    int two = count(s.begin(), s.end(), '2');
    int three = count(s.begin(), s.end(), '3');
    string ans;
    while(one > 0) {
        ans += "1+";
        one--;
    }
    while(two > 0) {
        ans += "2+";
        two--;
    }
    while(three > 0) {
        ans += "3+";
        three--;
    }
    ans.pop_back();
    cout << ans << endl;
    return 0;
}