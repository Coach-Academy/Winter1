#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/rope>
 
using namespace std;
using namespace __gnu_pbds;
 
// void Omar_Alaraby(){
//     ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }
 
#define fixed(n) fixed << setprecision(n)
// #define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define dl "\n"
#define ordered_set tree<int, null_type,less<>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
#define int long long
#define all(v) v.begin(), v.end()
#define INF 2000000000000000000 // 2e18
#define Mod 1000000007


void Solve() {

    int q; cin >> q;
    string s = "";
    stack < string > hist;

    while(q--){
        int type; cin >> type;

        if(type == 1) {
            hist.push(s);

            string w; cin >> w;
            s += w;
        }
        else if(type == 2) {
            hist.push(s);

            int k; cin >> k;
            while(k--){
                s.pop_back();
            }
        }
        else if(type == 3) {
            int idx; cin >> idx;
            cout << s[idx - 1] << dl;
        }
        else {
            s = hist.top();
            hist.pop();
        }
    }

}  

int32_t main(){
    // Omar_Alaraby();
    
    int testCases = 1;
    // cin >> testCases;
    
    for(int t = 1; t<=testCases; t++){
        // cout << "set #" << t << ": " << dl;
        Solve();
    }
 
    return 0;
}
