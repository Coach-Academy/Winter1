#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector< string > ansOP;
vector< int > ansNUM;
priority_queue< int , vector< int > , greater< int > > pq;

void Insert(int x) {
    ansOP.push_back("insert");
    ansNUM.push_back(x);
    pq.push(x);
}

void removeMin() {
    if(pq.empty()) {
        Insert(1);
    }
    ansOP.push_back("removeMin");
    ansNUM.push_back(0);
    pq.pop();
}

void getMin(int x) {
    if(pq.empty() || x < pq.top()) {
        Insert(x);
        getMin(x); // x = 4, pq = {4}
    }
    else if(x == pq.top()) {
        ansOP.push_back("getMin");
        ansNUM.push_back(x);
    }
    else { // x > mn
        removeMin();
        getMin(x);
    }
}

int main() {
    int n;
    cin >> n;
    vector< string > op(n);
    vector< int > num(n);
    for(int i = 0; i < n; i++) {
        cin >> op[i];
        if(op[i] != "removeMin") {
            cin >> num[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(op[i] == "insert") {
            Insert(num[i]);
        }
        else if(op[i] == "removeMin") {
            removeMin();
        }
        else { // getMin
            getMin(num[i]);
        }
    }
    cout << (int)ansOP.size() << endl;
    for(int i = 0; i < (int)ansOP.size(); i++) {
        cout << ansOP[i];
        if(ansOP[i] != "removeMin") {
            cout << ' ' << ansNUM[i];
        }
        cout << endl;
    }
    return 0;
}
