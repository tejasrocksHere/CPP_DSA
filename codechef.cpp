#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int INF = 1e18;
const int MOD = 1e9 + 7;

void permutation(int index, vector<int>& arr, vector<vector<int>>& ds) {
    if (index == arr.size() - 1) {
        ds.push_back(arr);
        return;
    }
    for (int i = index; i < arr.size(); i++) {
        swap(arr[index], arr[i]);
        permutation(index + 1, arr, ds);
        swap(arr[index], arr[i]); // Backtrack to maintain original array
    }
}

void solve() {
  
}

signed main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t; // Read the number of test cases from input.txt
    while (t--) {
        solve();
    }

    return 0;
}
