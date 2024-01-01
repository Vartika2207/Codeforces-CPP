#include <iostream>
using namespace std;
#define int long long int

int maxXorOfK(int n, int k) {
    if(k == 1)
        return n;
    int maxHappiness = 1;
    while(maxHappiness <=n) {
        maxHappiness <<= 1;
    }
    return (maxHappiness - 1);
}

int32_t main() {
    int n, k;
    cin >> n >> k;
    cout << maxXorOfK(n, k);
    return 0;
    
}