#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
   
    int n;
    cin>>n;
    int sum=(n)*(n+1)/2;
    // cout<<sum<<endl;
    if(sum%2!=0){
        //odd
cout<<"NO"<<endl;
    }
    else 
    {
cout<<"YES"<<endl;

        vector<int>v1,v2;
        sum=sum/2;
        while(n){
            if(sum-n>=0){
                v1.push_back(n);
                sum-=n;
            }
            else
            v2.push_back(n);
        n--;
        }
        cout<<v1.size()<<endl;
        for(auto it: v1){
            cout<<it<<" ";
        }
        cout<<endl;
         cout<<v2.size()<<endl;
        for(auto it: v2){
            cout<<it<<" ";
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
