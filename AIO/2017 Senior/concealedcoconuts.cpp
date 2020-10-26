#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("cocoin.txt", "r", stdin);
    freopen("cocoout.txt", "w", stdout);
    int x1, x2, y1, y2, d1, d2;
    cin >> x1 >> y1 >> d1 >> x2 >> y2 >> d2;
    int dx = x1 - x2;
    int dy = y1 - y2;
    if (sqrt(dy*dy+dx*dx) + d1 < d2){
        cout << "no" << endl;
        return 0;
    } else if (sqrt(dy*dy + dx*dx) + d2 < d1){
        cout << "no" << endl;
        return 0;
    }
    if (sqrt(dy*dy + dx*dx) <= d1+d2){
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}
