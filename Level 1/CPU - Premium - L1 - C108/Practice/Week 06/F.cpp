#include <iostream>
using namespace std;

int getMax(int ar[], int i) {
    int maxValue = ar[0];
    for (int j = 1; j <= i; j++) {
        maxValue = max(maxValue, ar[j]);
    }
    return maxValue;
}

int getMin(int ar[], int i) {
    int minValue = ar[0];
    for (int j = 1; j <= i; j++) {
        if (ar[j] < minValue) {
            minValue = ar[j];
        }
    }
    return minValue;
}

int main() {
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    int ans = 0;
    for(int i = 1; i < n; i++) {
        if(getMax(ar, i - 1) < ar[i]) {
            ans++;
        }
        if(getMin(ar, i - 1) > ar[i]) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}