#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    // Write your solution here
     stack<int> st;
 vector<int> arr = {2, 1, 2, 4, 3};
int n=arr.size();
    vector<int> nge(n, -1);

   for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }
        if (!st.empty()) {
            nge[i] = st.top();
        }
        st.push(i);
    }
   for(auto it: nge)
   cout<<it<<" ";
    
}

signed main() {
    // freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t=1;
    // cin >> t; // Read the number of test cases from input.txt
    while (t--) {
         solve();
    }

    return 0;
}
