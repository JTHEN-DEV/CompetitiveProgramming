#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("cookiesin.txt", "r", stdin);
    //freopen("cookiesout.txt", "w", stdout);
    int d, c0, p1, c1, p2, c2;
    cin >> d >> c0 >> p1 >> c1 >> p2 >> c2;
    vector<int> o;
    o.push_back(d*c0);
    int d1, d2;
    int x = ceil((double)p1/c0);
    d1 = d - x;
    cout << d*c0 - p1 + d1 * c1 << endl;
    o.push_back(d*c0 - p1 + d1 * c1 + p1%c0);
    sort(o.begin(), o.end());
    cout << o.back() << endl;
}
