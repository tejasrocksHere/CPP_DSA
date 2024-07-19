#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int INF = 1e18;
const int MOD = 1e9 + 7;
int f(int x,int y, vector<vector<char>>&arr) //no ways (x,y)->dest
{
    if(x==arr.size() || y==arr.size())
    return 0;
if(x==arr.size()-1 and y==arr.size()-1)
return 0;
int c1=0,c2=0;

if(x+1<arr.size() and arr[x+1][y]!='*')
c1=f(x+1,y,arr);

if(y+1<arr.size() and arr[x][y+1]!='*')
c2=f(x,y+1,arr);
return c1+c2;
}

void solve() {
    // Write your solution here
int n;
    vector<vector<char>>arr(n,vector<char>(n,'.'));
    // v.push_pack(1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        
          cin>>arr[i][j];

       
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        
          cout<<arr[i][j];

       
        }

    }

//    cout<< f(0,0,arr);
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
