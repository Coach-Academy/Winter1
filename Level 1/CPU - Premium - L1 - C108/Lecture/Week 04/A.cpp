#include <iostream>

using namespace std;

const int N= 1e6+5;
int arr[N];

int main(){
    int n;
    cin >> n;
    for(int i =0;i<n;i++)
        cin >> arr[i];
    int l,r;
    cin >> l >> r;
    for(int i = l-1;i <r;i++)
        cout << arr[i] << " ";
    cout << '\n';
    return 0;
}