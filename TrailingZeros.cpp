#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int INF = 1e18;
const int MOD = 1e9 + 7;
void solve(){
    int n;
    int c=0;
    cin>>n;
 for(int i=0;i<=n;i+=5){
//for each num cheack how many 5 he can give
c+=(i/5);


 }
cout<<c;
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
