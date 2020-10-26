#include <bits/stdc++.h>

using namespace std;

int main(){
    string s = "ababa";
    string fin = "";
    for(int i = 1; i < s.length(); i++){
        string out = "";
        if (s[i-1] == s[i+1]){
            out = s.substr(i-1, 3);
            for (int a = 2; i+a < s.length() && i-a >= 0; a++){
                if (s[i+a] == s[i-a]){
                    out = s[i-a] + out + s[i+a];
                } else {
                    break;
                }
            }
            if (fin.length() < out.length()){
                fin = out;
            }
        }
        if (s[i-1] == s[i]){
            out = s.substr(i-1, 2);
            for (int a = 2; i+a-1 < s.length() && i-a >= 0; a++){
                if (s[i+a-1] == s[i-a]){
                    out = s[i-a] + out + s[i+a-1];
                } else {
                    break;
                }
            }
            if (fin.length() < out.length()){
                fin = out;
            }
     }
    }
 cout << fin << endl;
}
