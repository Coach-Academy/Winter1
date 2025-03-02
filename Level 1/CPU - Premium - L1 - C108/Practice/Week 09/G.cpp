#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack< int > stk;
    for(int i = 0; i < (int)s.size(); i++) {
        if(stk.empty() || s[i] != stk.top()) {
            stk.push(s[i]);
        }
        else {
            stk.pop();
        }
    }
    cout << (stk.empty() ? "Yes" : "No") << endl;
    return 0;
}
