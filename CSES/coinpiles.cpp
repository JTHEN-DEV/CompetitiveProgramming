#include <bits/stdc++.h>

using namespace std;

map<pair<int, int>, bool> done;
map<pair<int, int>, bool> dp; 

bool c(int a, int b){
    if (a == 0 && b == 0){
        return true;
    } else if ( a < 0 || b < 0){
        return false;
    }
    if (done[make_pair(a, b)]){
        return dp[make_pair(a, b)];
    }
    bool y = c(a-2, b-1) || c(a-1, b-2);
    dp[make_pair(a, b)] = y;
    done[make_pair(a, b)] = true;
    return y;
}

int main(){
    int t;
    cin >> t;
    int a, b;
    while (t--){
        cin >> a >> b;
        if (a == 0 || b == 0){
            cout << "YES" << endl;
        } else if (a+b < 3){
            cout << "NO" << endl;
        } else if (c(a, b)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
