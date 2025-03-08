#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    vector< bool > isExist(1);
    queue< pair< int , int > > q;
    priority_queue< pair< int , int > > pq;
    // O(n * logn)
    while(n--) {
        int op;
        cin >> op;
        if(op == 1) { // add, O(logn) nested
            int m; cin >> m;
            cnt++;
            q.push({m, cnt});
            pq.push({m, -cnt});
            isExist.push_back(true);
        }
        else if(op == 2) { // remove first (q), O(n) parallel
            while(!isExist[q.front().second]) {
                q.pop();
            }
            cout << q.front().second << ' ';
            isExist[q.front().second] = false;
        }
        else { // remove large (pq), O(n * logn) parallel
            while(!isExist[-pq.top().second]) {
                pq.pop();
            }
            cout << -pq.top().second << ' ';
            isExist[-pq.top().second] = false;
        }
    }
    return 0;
}
