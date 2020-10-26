#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        int a = 0;
        bool y = false;
        while (n != 1){
            if (n%6 == 0){
                n /=6;
            } else {
                n *=2;
            }
            if (n%3 != 0 && n != 1){
                cout << -1 << endl;
                y = true;
                break;
            }
            a++;
        }
        if (!y) cout << a << endl;
    }
}
