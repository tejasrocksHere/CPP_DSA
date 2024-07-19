#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int INF = 1e18;
const int MOD = 1e9 + 7;

int f(int N, vector<int>& dp) {
    dp[0] = 0; // It takes 0 steps to reduce 0 to 0

    for (int n = 1; n <= N; n++) {
        int t = n;
        int ans = INT_MAX;
        
        while (t != 0) {
            int digit = t % 10;
            if (digit != 0 && n - digit >= 0) {
                ans = min(dp[n - digit] + 1, ans);
            }
            t /= 10;
        }
        dp[n] = ans;
    }

    return dp[N];
}

void solve() {
    int n;
    cin >> n;

    vector<int> dp(n + 1, 0);
    cout << f(n, dp) << endl;
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
