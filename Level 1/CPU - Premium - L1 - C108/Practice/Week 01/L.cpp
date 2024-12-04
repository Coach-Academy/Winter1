#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // 45
    int counter = 0;

    // 100
    counter += n / 100; // = 0
    n = n % 100; // 45 % 100 = 45

    // 20
    counter += n / 20; // 45 / 20 = 2
    n = n % 20; // n = 45 % 20 = 5

    // 10
    counter += n / 10; // 5 / 10 = 0
    n = n % 10; // 5 % 10 = 5

    // 5
    counter += n / 5; // 5 / 5 = 1 ||||||| counter = 2 + 1 = 3
    n = n % 5; // 5 % 5 = 0

    // 1
    counter += n;

    cout << counter << endl;
    return 0;
}
