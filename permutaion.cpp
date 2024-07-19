#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define int long long

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    // Write your solution code here
    int n;
    cin>>n;
    vector<int>even,odd;
    for(int i=1;i<=n;i++)
{
    if(i%2==0){
        even.push_back(i);
    
    }
    else
    odd.push_back(i);

}
if(n==1)
cout<<n;
else if(n==3 || n==2)
cout<<"NO SOLUTION";
else{
for(auto it : even ){
    cout<<it<<" ";
}
for(auto it : odd ){
    cout<<it<<" ";
}
}

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
