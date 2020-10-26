#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, d, a;
    bool y = true;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        y = true;
        for (int b = 0; b < a; b++){
            cin >> d;
            if (!(d%2) && y){
                cout << "NO" << endl;
                y = false;
            }
        }
        if (y){
            cout << "YES" << endl;
        }
    }
}
