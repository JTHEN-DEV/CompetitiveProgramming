#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, x, y, z;
    cin >> x >> y >> z;
    a = (max(x+y*z, x*y+z));
    a = max(a, x*y*z);
    a = max(a, (x+y)*z);
    a = max(a, x*(y+z));
    a = max(a, x+y+z);
    cout << a;
}
