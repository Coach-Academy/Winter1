#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack< string > stk;
    string cur;
    while (n--) {
        int op;
        cin >> op;
        if(op == 1) { // push word
            string s; cin >> s;
            stk.push(cur);
            cur += s;
        }
        else if(op == 2) { // delete k char
            int k; cin >> k;
            stk.push(cur);
            while(k--) {
                cur.pop_back();
            }
        }
        else if(op == 3) { // print kth
            int k; cin >> k;
            cout << cur[k - 1] << endl;
        }
        else { // undo
            cur = stk.top();
            stk.pop();
        }
    }
    return 0;
}

/*
8
1 abc
3 3
2 3
1 xy
3 2
4
4
3 1

*/