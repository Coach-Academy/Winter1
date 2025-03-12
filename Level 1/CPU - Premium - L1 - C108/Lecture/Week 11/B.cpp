#include <iostream>
using namespace std;

long long sum(long long x) {
    long long s = 0;
    while(x) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int superDigit(long long x) {
    if(x < 10) {
        return x;
    }
    return superDigit(sum(x));
}

int main() {
    string n;
    int k;
    cin >> n >> k;
    long long s = 0;
    for(char c : n) {
        s += c - '0';
    }
    cout << superDigit(s * k) << endl;
    return 0;
}
