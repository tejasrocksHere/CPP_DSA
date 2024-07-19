#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define int long long

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    // Write your solution code here
    int n;
    cin>>n;
    int sum=(n+1)*n/2;
    for(int i=0;i<n-1;i++){
        int k;
        cin>>k;
        sum-=k;


    }
    cout<<sum;
}

signed main() {
    fast_io();

    int t = 1;
    // cin >> t; // Uncomment this line if the number of test cases is provided
    while (t--) {
        solve();
    }

    return 0;
}
