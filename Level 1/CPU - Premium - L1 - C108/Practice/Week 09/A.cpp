#include <iostream>
#include <queue>
using namespace std;

int main() {
    // for fast input and output
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int Q;
    cin >> Q;
    queue< int > q;
    while(Q--) {
        int op;
        cin >> op;
        if(op == 1) {
            int x; cin >> x;
            q.push(x);
        }
        else if(op == 2) {
            if(!q.empty()) {
                q.pop();
            }
        }
        else {
            if(q.empty()) {
                cout << "Empty!" << '\n';
            }
            else {
                cout << q.front() << '\n';
            }
        }
    }
    return 0;
}
