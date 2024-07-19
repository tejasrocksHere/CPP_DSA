#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

const int MOD = 1e9 + 7;

int f(vector<int>& coins, int t, vector<int>& dp) {
    if (t == 0) return 0;
    if (dp[t] != -1) return dp[t];

    int mini = 1e9;
    for (int i = 0; i < coins.size(); i++) {
        if (t - coins[i] >= 0) {
            mini = min(f(coins, t - coins[i], dp) + 1, mini);
        }
    }

    return dp[t] = mini;
}

void solve() {
    // Read input
    int n;
    cin >> n;

    vector<int> v(n);
    int target;
    cin >> target;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Initialize dp array with -1 and size target + 1
    vector<int> dp(target + 1, -1);

    // Compute the result
    int result = f(v, target, dp);

    // If result is still the initial high value, it means no solution was found
    if (result >= 1e9) {
        cout << -1;
    } else {
        cout << result;
    }
}

signed main() {
    // For reading input from a file
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t = 1;
    // cin >> t; // Uncomment if you want to read the number of test cases from input.txt
    while (t--) {
        solve();
    }

    return 0;
}
