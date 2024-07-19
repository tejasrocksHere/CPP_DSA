#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define int long long

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    int prev = arr[0]; // Initialize prev with the first element of the array
    int ans = 0;
    for (int i = 1; i < n; i++) { // Start from the second element
        int cur = arr[i];
        if (cur < prev) {
            ans += (prev - cur);
            arr[i] = prev; // Update the current element to match prev
        }
        prev = arr[i]; // Update prev for the next iteration
    }
        
   
    cout << ans;
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
