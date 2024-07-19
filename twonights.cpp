#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
 int n;
 cin>>n;
 cout<<0<<" ";
 int k=1;
 int addingFact=2;
    for(int i=2;i<=n;i++){
        long long sqr=i*i;
      
    long long  ans=(sqr*(sqr-1))/2; //nc2
if(i==2)
{
    cout<<ans<<" ";

    continue;

}
else {

cout<<ans-k*8<<" ";
k+=addingFact;
// cout<<ans<<endl;
addingFact++;
}
        
    }

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
