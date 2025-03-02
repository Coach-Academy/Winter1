#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    queue< int > q;
    priority_queue< int , vector< int > , greater< int > > pq;
    int n;
    cin >> n;
    while(n--) {
        int op;
        cin >> op;
        if(op == 1) { // O(1)
            int x; cin >> x;
            q.push(x);
        }
        else if(op == 2) { // O(log(n))
            if(!pq.empty()) {
                cout << pq.top() << endl;
                pq.pop();
            }
            else {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else { // O(n * log(n))
            while(!q.empty()) {
                pq.push(q.front());
                q.pop();
            }
        }
    }
    return 0;
}
