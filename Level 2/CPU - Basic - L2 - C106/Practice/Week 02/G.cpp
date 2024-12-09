#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/rope>
 
using namespace std;
using namespace __gnu_pbds;
 
void Omar_Alaraby(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
#define fixed(n) fixed << setprecision(n)
// #define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define dl "\n"
#define ordered_set tree<int, null_type,less<>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
#define int long long
#define all(v) v.begin(), v.end()
#define INF 2000000000000000000 // 2e18
#define Mod 1000000007

/*
 3 / 2 + (3 % 2 != 0) = 1 + 1 = 2     , (3 % 2 != 0) -> true -> 1
 a / b -> (a + b - 1) / b
 */

void Solve() {

    int n, m; cin >> n >> m;

    int rounds = 0, idx = 0;
    for(int i=0; i<n; i++){
        int x; cin >> x;

        if(x / m + (x % m != 0) >= rounds) {
            rounds = x / m + (x % m != 0);
            idx = i + 1;
        }
    }

    cout << idx << dl;

}  

int32_t main(){
    Omar_Alaraby();
    
    int testCases = 1;
    // cin >> testCases;
    
    for(int t = 1; t<=testCases; t++){
        // cout << "set #" << t << ": " << dl;
        Solve();
    }
 
    return 0;
}
