#include <bits/stdc++.h>

using namespace std;

int main(){
    string a, b, c;
    cin >> a >> b >> c;
    map<char, int> m1;
    map<char, int> m2;
    for (char i : a){
        m1[i]++;
    }
    for (char x : b){
        m1[x]++;
    }
    for (char y : c){
        m2[y]++;
    }
    for (pair<char, int> p : m1){
        if (m2[p.first] != p.second || m2.size() != m1.size()){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
