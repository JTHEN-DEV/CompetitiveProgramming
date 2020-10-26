#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("rainin.txt", "r", stdin);
    freopen("rainout.txt", "w", stdout);
    int c, n;
    cin >> n >> c;
    int s = 0;
    int d = 0;
    if (c == 0){
        cout << 0;
        return 0;
    }
    while (n--){
        int a;
        cin >> a;
        s+=a;
        d++;
        if (s >= c){
            cout << d;
            break;
        }
    }
}
