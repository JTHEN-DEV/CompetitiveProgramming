#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int n){
    string s = to_string(n);
    for (int i = 0; i < s.length()/2; i++){
        if (s[i] != s[s.length()-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int max = 0;
    for (int x = 999; x > 99; x--){
        for (int y = 999; y > 99; y--){
            if (isPalindrome(x*y) && (x*y > max)){
                max = x*y;
            }
        }
    }
    cout << max;
}
