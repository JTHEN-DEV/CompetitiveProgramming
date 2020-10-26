#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("snakein.txt", "r", stdin);
    freopen("snakeout.txt", "w", stdout);
    string s;
    cin >> s;
    if (s.length() <= 25){
        cout << 1 << endl;
    } else {
        cout << 1 + ((s.length()-1)/25);
    }
    return 0;
    int mi = s.length();
    char p = s[0];
    int n = 0;
    for (char a : s){
        if (p == a){
            n++;
        } else {
            mi = min(mi, n);
            n = 1;
        }
        p = a;
    }
    cout << mi << endl;
}
