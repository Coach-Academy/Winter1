#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    for(int i = 1; i <= n; i++) {
        int s; cin >> s;
        if(s == 1) {
            one++;
        }
        else if(s == 2){
            two++;
        }
        else if(s == 3){
            three++;
        }
        else {
            four++;
        }
    }

    int ans = 0;

    ans += four;

    while(three > 0 && one > 0) {
        three--;
        one--;
        ans++;
    }

    ans += three;

    ans += two / 2;
    two = two % 2;

    if(two) {
        ans++;
        two = 0;
        one -= 2;
    }

    ans += (one + 4 - 1) / 4;

    cout << ans << endl;
    return 0;
}