#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("dictin.txt", "r", stdin);
    freopen("dictout.txt", "w", stdout);
    int d, w;
    cin >> d >> w;
    map<int, int> iw;
    while (d--){
        int a, b;
        cin >> a >> b;
        iw[a] = b;
    }
    while (w--){
        int c;
        cin >> c;
        if (iw.find(c) != iw.end()){
            cout << iw[c] << endl;;
        } else {
            cout << "C?" << endl;
        }
    }
}
