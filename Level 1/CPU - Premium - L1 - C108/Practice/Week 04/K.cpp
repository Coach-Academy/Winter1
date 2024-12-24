#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int ar[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> ar[i][j];
        }
    }

    bool state[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            state[i][j] = true;
        }
    }

    if(ar[0][0] % 2 == 1) {
        state[0][0] = !state[0][0];
        state[0][1] = !state[0][1];
        state[1][0] = !state[1][0];
    }
    if(ar[0][1] % 2 == 1) {
        state[0][1] = !state[0][1];
        state[0][0] = !state[0][0];
        state[0][2] = !state[0][2];
        state[1][1] = !state[1][1];
    }
    if(ar[0][2] % 2 == 1) {
        state[0][2] = !state[0][2];
        state[0][1] = !state[0][1];
        state[1][2] = !state[1][2];
    }
    if(ar[1][0] % 2 == 1) {
        state[1][0] = !state[1][0];
        state[0][0] = !state[0][0];
        state[2][0] = !state[2][0];
        state[1][1] = !state[1][1];
    }
    if(ar[1][1] % 2 == 1) {
        state[1][1] = !state[1][1];
        state[0][1] = !state[0][1];
        state[1][0] = !state[1][0];
        state[1][2] = !state[1][2];
        state[2][1] = !state[2][1];
    }
    if(ar[1][2] % 2 == 1) {
        state[1][2] = !state[1][2];
        state[0][2] = !state[0][2];
        state[1][1] = !state[1][1];
        state[2][2] = !state[2][2];
    }
    if(ar[2][0] % 2 == 1) {
        state[2][0] = !state[2][0];
        state[1][0] = !state[1][0];
        state[2][1] = !state[2][1];
    }
    if(ar[2][1] % 2 == 1) {
        state[2][0] = !state[2][0];
        state[2][1] = !state[2][1];
        state[1][1] = !state[1][1];
        state[2][2] = !state[2][2];
    }
    if(ar[2][2] % 2 == 1) {
        state[2][2] = !state[2][2];
        state[2][1] = !state[2][1];
        state[1][2] = !state[1][2];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << state[i][j];
        }
        cout << endl;
    }
    return 0;
}