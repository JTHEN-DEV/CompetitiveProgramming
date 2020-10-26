#include <bits/stdc++.h>

using namespace std;

vector<int> coins = {2, 3, 5, 6};

vector<int> d(10000, -1);

dp (vector<int> c, int n){
    if (n == 0){
        return 1;
    } else if (n < 0){
        return 0;
    }
    if (d[n] != -1){
        return d[n];
    }
    int total = 0;
    for (int i : c){
        total += dp (c, n - i);
    }
    d[n] = total;
    return total;
}

int main(){
    int n = 10;
    cout << dp(coins, n);
    for (int i = 0; i < 11; i++){
        cout << d[i] << endl;
    }
}
