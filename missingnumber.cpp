#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    vector<bool> present(MOD , false); // Initialize a boolean array to mark presence of elements
    int distinctCount = 0;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (!present[k]) { // If element is not already present
            present[k] = true; // Mark it as present
            distinctCount++; // Increment the count of distinct elements
        }
    }

    cout << distinctCount << endl;
}

signed main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t=1;
    // cin >> t; // Read the number of test cases from input.txt
    while (t--) {
         solve();
    }

    return 0;
}
