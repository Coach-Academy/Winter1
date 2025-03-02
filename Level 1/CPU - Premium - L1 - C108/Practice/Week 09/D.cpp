#include <iostream>
#include <stack>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        stack< char > stk;
        for(int i = 0; i < (int)s.size(); i++) {
            if(s[i] == '{' || s[i] == '[' || s[i] == '(') {
                stk.push(s[i]);
                continue;
            }
            else if(!stk.empty()){
                if(stk.top() == '{' && s[i] == '}') {
                    stk.pop();
                    continue;
                }
                else if(stk.top() == '(' && s[i] == ')') {
                    stk.pop();
                    continue;
                }
                else if(stk.top() == '[' && s[i] == ']') {
                    stk.pop();
                    continue;
                }
            }
            stk.push('a');
        }
        cout << (stk.empty() ? "YES" : "NO") << endl;
    }
    return 0;
}

/*

3
{[()]}
{[(])}
{{[[(())]]}}
*/