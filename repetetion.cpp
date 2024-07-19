#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define int long long

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    // Write your solution code here
    string s;
    cin>>s;
    int ans=1;
    char prev=s[0];
    int i=0;
    int n=s.length();
    for(int j=1;j<n;j++){
if(prev==s[j])
ans=max(ans,j-i+1);
else
{i=j;
prev=s[j];
}
    }
    cout<<ans;

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
