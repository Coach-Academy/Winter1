#include <iostream>
using namespace std;

int main() {
    string total;
    // Using getline function
    // getline(cin, total);

    while (total[total.size() - 1] != '}') {
        string s;
        cin >> s;
        total += s;
    }
    int ans = 0;
    for(char c = 'a'; c <= 'z'; c++) {
        if(total.find(c) != -1) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}