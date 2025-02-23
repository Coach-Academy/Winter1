#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    deque< int > a;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }
    while(d--) {
        a.push_back(a.front());
        a.pop_front();
    }
    while(!a.empty()) {
        cout << a.front() << ' ';
        a.pop_front();
    }
    cout << endl;
    return 0;
}
