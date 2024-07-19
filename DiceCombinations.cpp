#include <bits/stdc++.h>
using namespace std;

#define endl '\n'



const int MOD = 1e9 + 7;
int f(int s,vector<int> &dp){
if(s==0)
return 1;
int c=0;
if(dp[s]!=-1)
return dp[s];
int mini=min(6,s);
for(int i=1;i<=mini;i++){

c=(c+f(s-i,dp))%MOD;

}

return dp[s]=c;








}


void solve() {
    // Write your solution here
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    // v.push_pack(1);
    // cout<<f(n,dp);
dp[0]=1;
    for(int s=1;s<=n;s++){
        int c=0;
        for(int i=min(6,s);i>=1;i--){
c=(c+dp[s-i])%MOD;
        }
        dp[s]=c;
    }

    cout<<dp[n];
}

signed main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t=1;
    // cin >> t; // Read the number of test cases from input.txt
    while (t--) {
         solve();
    }

    return 0;
}
