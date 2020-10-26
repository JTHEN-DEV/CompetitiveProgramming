#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, n, f, t;
    t = 0;
    cin >> n >> f;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a > f) t++;
    }
    t += n;
    cout << t;
}
