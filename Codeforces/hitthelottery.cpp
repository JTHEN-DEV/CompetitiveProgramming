#include <bits/stdc++.h>

using namespace std;

int main(){
    int m[5] = {100, 20, 10, 5, 1};
    int n;
    int t = 0;
    cin >> n;
    for (int i = 0; i < 5; i++){
        t += (n-n%m[i])/m[i];
        n = n%(m[i]);
    }
    cout << t << endl;
}
