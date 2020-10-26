#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, q;
    cin >> l >> q;
    vector<string> c;
    int t = l;
    string s;
    while (t--){
        cin >> s;
        c.push_back(s);
    }
    while (q--){
        cin >> s;
        vector<string> tags;
        string cur = "";
        bool dot = false;
        for (char a : s){
            if (a == '.'){
                dot = true;
            } else {
                if (dot){
                    tags.push_back(cur);
                } else {
                    cur += a;
                }
                dot = false;
            }
        }
    }
    return 0;
}

