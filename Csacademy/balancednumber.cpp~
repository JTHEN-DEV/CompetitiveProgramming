#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> m;
    for (char a : s){
        m[a]++;
    }
    int x = m['0'];
    for (auto y : m){
        if (y.second != x){
            return 0;
        }
    }
    return 1;
}
