#include <bits/stdc++.h>

using namespace std;
    int main(){
        string word;
        cin >> word;
        int s = 0;
        int type = 0;
        if (!(isupper(word[0]))){
            type = 0;
        } else if (isupper(word[0]) && isupper(word[1])){
            type = 1;
        } else if (isupper(word[0]) && islower(word[1])){
            type = 0;
        }
        for (char a : word.substr(2, word.length() - 2)){
            if (isupper(a) != type){
                return false;
            }
        }
        return true;
    }
