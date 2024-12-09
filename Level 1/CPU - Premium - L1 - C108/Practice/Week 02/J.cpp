#include <iostream>
using namespace std;

int main() {
    int A,B,C;
    cin >> A >> B >> C;
    if(A > B) {
        cout << "Takahashi";
    }
    else if(B > A) {
        cout << "Aoki";
    }
    else {
        if(C == 0) {
            cout << "Aoki";
        }
        else {
            cout << "Takahashi";
        }
    }
    return 0;
}
