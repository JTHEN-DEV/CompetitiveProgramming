#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n, m, a, t, pos;
    cin >> n >> m;
    t = 0;
    pos = 1;
    for (long long int i = 0; i < m; i++){
        cin >> a;
        t += (a<pos)*n + (a-pos);
        pos = a;
    }
    cout << t << endl;
}
