#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int a[26] = {0};
    for (int i = 0; i < n; i++){
        a[tolower(s[i]) - 'a'] = 1;
    }
    for (int b = 0; b < 26; b++){
        if (a[b] == 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
