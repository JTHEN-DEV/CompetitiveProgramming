#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("sitin.txt", "r", stdin);
    freopen("sitout.txt", "w", stdout);
    int a, b, c;
    cin >> a >> b >> c;
    int n = a*b;
    int sit, stand;
    sit = min(n, c);
    n -= sit;
    c -= sit;
    stand = c;
    cout << sit << " " << stand;
}
