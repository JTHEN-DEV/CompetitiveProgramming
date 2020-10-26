#include <bits/stdc++.h>

using namespace std;

map<long long int, pair<int, bool>> dp;

int d(long long int n){
    long long int total = 0;
    if (dp[n].second){
        return dp[n].first;
    }
    if (n < 0){
        return 0;
    } else if (n == 0){
        return 1;
    } else {
        for (int i = 1; i <= 6; i++){
            total += d(n - i)%1000000007;
        }
 }
    dp[n] = {total%1000000007, true};
    return total%1000000007;
}

int main(){
    long long int n;
    cin >> n;
    cout << d(n);
}
