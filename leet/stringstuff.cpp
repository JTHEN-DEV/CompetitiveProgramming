#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 2;
    string s = "abcd";
    vector<int> pos;
    pos.push_back(0);
    if (n == 1){
        pos[0] = -1;
    }
    for (int x = 0; x < n-1; x++){
        pos.push_back(x);
    }
    for (int i = n-1; i >= 0; i--){
            int a = -1;
            if (pos[i] != s.length()-1){
                pos[i]++;
                if (a != -1){
                    for (int b = a+1; b < s.length(); b++){
                        pos[b] = pos[i]+1+b;
                    }
                }
                break;
            } else {
                a = i;
            }
        }

    for (int y : pos){
        cout << y << " " << s[y] << endl;
    }
    cout << endl;

    for (int i = n-1; i >= 0; i--){
            int a = -1;
            if (pos[i] != s.length()-1){
                pos[i]++;
                if (a != -1){
                    for (int b = a; b < s.length(); b++){
                        pos[b] = pos[i]+1+b;
                    }
                }
                break;
            } else {
                a = i;
            }
        }

    for (int y : pos){
        cout << y << " "<< s[y] << endl;
    }
    cout << endl;

    for (int i = n-1; i >= 0; i--){
            int a = -1;
            if (pos[i] != s.length()-1){
                pos[i]++;
                if (a != -1){
                    for (int b = a; b < s.length(); b++){
                        pos[b] = pos[i]+1+b;
                    }
                }
                break;
            } else {
                a = i;
            }
        }

    for (int y : pos){
        cout << y << " "<< s[y] << endl;
    }
    cout << endl;
}
