#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("probein.txt", "r", stdin);
    freopen("probeout.txt", "w", stdout);
    int r, c, rp, cp, rf, cf, n;
    cin >> r >> c >> rp >> cp >> rf >> cf;
    cin >> n;
    string s;
    while (n--){
        int x, y;
        cin >> x >> y;
        if (abs(rp-x) + abs(cp-y) == abs(rf-x) + abs(cf-y)){
            s += "MOUNTAINS\n";
        } else if (abs(rp-x) + abs(cp-y) > abs(rf-x) + abs(cf-y)){
            s += "LAVA \n";
        } else {
            s += "WATER \n";
        }
    }
    cout << s << endl;
}
