#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector< int > a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector< int > ans;
    for(int i = 0; i + 1 < n; i++) {
        if(a[i] >= a[i + 1]) {
            ans.push_back(a[i]);
        }
    }
    ans.push_back(a.back());
    cout << (int)ans.size() << endl;
    for(int i = 0; i < (int)ans.size(); i++) {
        cout << ans[i] << ' ';
    }
    return 0;
}

// Smart solution
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    vector< int > a(n);
//    for(int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    vector< int > ans;
//    for(int i = n - 1; i >= 0; i -= a[i]) {
//        ans.push_back(a[i]);
//    }
//    reverse(ans.begin(), ans.end());
//    cout << (int)ans.size() << endl;
//    for(int i = 0; i < (int)ans.size(); i++) {
//        cout << ans[i] << ' ';
//    }
//    return 0;
//}
