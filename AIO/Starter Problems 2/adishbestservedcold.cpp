#include <bits/stdc++.h>

using namespace std;

int main(){
 freopen("dishin.txt", "r", stdin);
    freopen("dishout.txt", "w", stdout);
    int n, mx, mn, s;
    s = 0;
    cin >> n;
    int e = n;
    mx = 0;
    mn = 10000000;
    while (n--){
        int a;
        cin >> a;
        mx = max(mx, a);
        mn = min(mn, a);
        s += a;
    }
    cout << mn << " " << mx << " " << s/e;
}
