#include <iostream>
#include <cmath>
using namespace std;

int NthRoot(int n, int m) {
    if (n == 1)
        return m;
    if (m == 1)
        return 1;
    
    int low = 1;
    int high = m;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long cur = pow(mid, n);
        
        if (cur == m)
            return mid;
        else if (cur > m)
            high = mid - 1;
        else
            low = mid + 1;
    }
    
    return -1;
}

int main() {
    int n = 6;
    int m = 15625;
    cout << NthRoot(n, m) << endl; // Expected output should be 5
    return 0;
}
