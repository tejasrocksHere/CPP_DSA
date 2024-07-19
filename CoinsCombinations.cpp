#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;

void solve() {
    int n, target;
    cin >> n >> target;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    // dp[i] will store the number of ways to make sum i using the given coins
    vector<int> dp(target + 1, 0);
    dp[0] = 1; // There's one way to make the sum 0, which is by not using any coins

    // Compute the number of ways for each sum from 1 to target
    for (int coin : coins) {
        for (int j = coin; j <= target; j++) {
            dp[j] = (dp[j] + dp[j - coin]) % MOD;
        }
    }

    cout << dp[target] << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t; // Uncomment if you want to read the number of test cases from input.txt
    while (t--) {
        solve();
    }

    return 0;
}
