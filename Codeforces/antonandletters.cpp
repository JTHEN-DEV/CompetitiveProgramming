#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    s = s.substr(1, s.size()-2);
    sort(s.begin(), s.end());
    int n = 1;
    if (s.length() != 0) s = s.substr((s.size()-1)/3 * 2, s.size());
    else n=0;
    for (int i = 1; i < s.length(); i++){
        if (s[i] != s[i-1]){
            n++;
        }
    }
    cout << n;
}
