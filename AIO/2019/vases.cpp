#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("vasesin.txt", "r", stdin);
    freopen("vasesout.txt", "w", stdout);
    int n;
    cin >> n;
    if (n < 6){
        cout << "0 0 0" << endl;
    } else {
        cout << "1 2 " << n - 3 << endl;
    }
}
