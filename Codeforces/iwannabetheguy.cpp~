#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p, q, a;
    cin >> n >> p;
    int x[p];
    for (int i = 0; i < p; i++){
        cin >> a;
        x[i] = a;
    }
    cin >> q;
    int y[q];
    for (int c = 0; c < q; c++){
        cin >> a;
        y[c] = a;
    }
    int * l;
    int * m;
    for (int d = 1; d < n+1; d++){
        l = find(x, x+p, d);
        m = find(y, y+q, d);
        if (l == x+p && m == y+q){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
}
