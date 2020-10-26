#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int t, n, x, y;
    cin >> t;
    for (long long int i = 0; i < t; i++){
        cin >> x >> y >> n;
        long long int r;
        for (r = n; r > 0 && r > n-x; r--){
            if (r%x == y){
                break;
            }
        }
        cout << r << endl;
    }
}
