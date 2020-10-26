#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("bendin.txt", "r", stdin);
    freopen("bendout.txt", "w", stdout);
    int ax1, ay1, ax2, ay2, bx1, by1, bx2, by2, total;
    cin >> ax1 >> ay1 >> ax2 >> ay2 >> bx1 >> by1 >> bx2 >> by2;
    total = abs(ax1 - ax2) * abs(ay1 - ay2) + abs(bx1 - bx2) * abs(by1 - by2);
    int il, ir, iu, id;
    il = max(ax1, bx1);
    ir = min(ax2, bx2);
    id = max(ay1, by1);
    iu = min(ay2, by2);
    int o = 0;
    if (il < ir && id < iu){
        o = abs(il-ir) * abs(id-iu);
    }
    cout << total-o;
}
