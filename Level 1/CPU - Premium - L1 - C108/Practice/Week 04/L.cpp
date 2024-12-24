#include <iostream>
using namespace std;

int main() {
    for(int setNumber = 1; ; setNumber++) {
        int n;
        cin >> n;
        if(n == 0) {
            break;
        }
        int ar[n];
        for(int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += ar[i];
        }
        int avg = sum / n;
        int need = 0;
        for(int i = 0; i < n; i++) {
            if(ar[i] < avg) {
                need += avg - ar[i];
            }
        }
        cout << "Set #" << setNumber << endl;
        cout << "The minimum number of moves is ";
        cout << need << "." << endl;
    }
    return 0;
}