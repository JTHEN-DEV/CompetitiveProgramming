#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    t = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s;
        if (s == "Tetrahedron"){
            t += 4;
        } else if (s == "Cube"){
            t += 6;
        } else if (s == "Octahedron"){
            t += 8;
        } else if (s == "Dodecahedron"){
            t += 12;
        } else {
            t += 20;
        }
    }
    cout << t;
}
