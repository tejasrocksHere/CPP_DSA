#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int INF = 1e18;
const long long MOD = 1e9 + 7;

void solve() {
 int n;
 cin>>n;
 long long  ans=1;
for(int i=0;i<n;i++){
    ans=(ans*2)%MOD;
}
cout<<ans;
    

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
