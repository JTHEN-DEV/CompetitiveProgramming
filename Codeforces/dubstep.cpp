#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    for (int i = 2; i < s.length(); i=i){
        if (s[i] == 'B' && s[i-1] == 'U' && s[i-2] == 'W'){
            if (i-3 > -1 && s[i-3] != ' '){
                s[i-2] = ' ';
                s.erase(s.begin() + i-1, s.begin() + i+1);
            } else {
                s.erase(s.begin() + i-2, s.begin() + i+1);
            }
        } else {
            i++;
        }
    }
    cout << s;
}
