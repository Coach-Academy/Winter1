#include <iostream>
using namespace std;

int main() {
    int month, day;
    cin >> month >> day;
    if(day >= month) {
        cout << month;
    }
    else {
        cout << month - 1;
    }
    return 0;
}
