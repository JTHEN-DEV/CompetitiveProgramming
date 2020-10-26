#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        cin >> s;
        int y = 0;
        int open = 0;
        int closing = 0;
        for (char a : s){
            if (a == '('){
                open++;
            } else {
                closing++;
            }
            if (closing > open){
                y++;
                closing = open;
            }
        }
        cout << y << endl;
    }
}
