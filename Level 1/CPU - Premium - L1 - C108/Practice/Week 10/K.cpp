#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

// O(n * logn)
int main() {
    int n, tar;
    cin >> n >> tar;
    map< int , int > B,S;
    // O(n)
    for(int i = 1; i <= n; i++) {
        char op;
        int p, q;
        cin >> op >> p >> q;
        if(op == 'B') {
            B[p] += q;
        }
        else {
            S[p] += q;
        }
    }
    vector< pair< int , int > > s,b;
    // O(n)
    for(auto &pr : S) {
        if((int)s.size() < tar) {
            s.push_back(pr);
        }
    }
    if(!B.empty()) {
        for(auto it = --B.end();; it--) {
            if((int)b.size() < tar) {
                b.push_back(*it);
            }
            if(it == B.begin()) {
                break;
            }
        }
    }

    // O(n * logn)
    sort(s.begin(), s.end(), greater< pair< int , int > >());
    sort(b.rbegin(), b.rend());

    // O(n)
    for(auto &[p, q] : s) {
        cout << "S " << p << ' ' << q << endl;
    }
    for(auto &[p, q] : b) {
        cout << "B " << p << ' ' << q << endl;
    }
    return 0;
}
