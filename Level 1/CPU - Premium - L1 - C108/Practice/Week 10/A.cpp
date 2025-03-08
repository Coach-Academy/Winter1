#include <iostream>
#include <set>
using namespace std;

int main() {
    // O(n * log(26))
    string s;
    cin >> s;
    set< char > st;
    for(auto &c : s) {
        st.insert(c);
    }
    cout << (int(st.size()) % 2 == 1 ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;
    return 0;
}
