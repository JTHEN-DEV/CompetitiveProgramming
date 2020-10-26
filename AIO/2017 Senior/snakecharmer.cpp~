#include <bits/stdc++.h>

using namespace std;

string seq(int n, string s){
    string out = "";
    while (n--){
        out += s;
    }
    return out;
}

int main(){
    //freopen("snakein.txt", "r", stdin);
    //freopen("snakeout.txt", "w", stdout);
    int x, y;
    cin >> x >> y;
    int c = min(abs(x), abs(y));
    string s = "";
    int r = 1;
    // 1 is up, 2 is right, 3 is down, 4 is left
    if (c != 0){
    if (x < 0 && y > 0){
        string a = seq(c, "LR");
        s += a;
        r = 1;
    } else if (x > 0 && y > 0){
        string a = seq(c, "RL");
        s += a;
        r = 1;
    } else if (x < 0 && y < 0){
        s += "LL";
        string a = seq(c-1, "RL");
        s += a;
        r = 3;
    } else {
        s += "RR";
        string a = seq(c-1, "LR");
        s += a;
        r = 3;
    }
    } else if (y < 0){
        y = abs(y);
        s += "RRR";
        y -= 1;
        if (y != 0){
            s += "L";
            y -= 1;
        }
        s += seq(floor(y - y%2), "RLLR");
        y -= (y - y%2);
        if (y == 1){
            s += "RLL";
        }
        cout << s << endl;
        return 0;
    }
    if (x < 0){
        x += c;
    } else {
        x -= c;
    }
    if (y < 0){
        r = 3;
    }
    y = abs(y);
    y -= c;
    if (x == 0){
        s += seq(floor(y - y%2), "RLLR");
        y -= (y - y%2);
        if (y == 1){
            s += "RLL";
        }
    } else {
        if ((x < 0 && r == 1) || (x > 0 && r == 3)){
            s += "L";
        } else {
            s += "R";
        }
        x = abs(x);
        x--;
        s += seq(floor(x - x%2), "RLLR");
        x -= (x - x%2);
        if (x == 1){
            s += "RLL";
        }
    }
    cout << s << endl;
}
