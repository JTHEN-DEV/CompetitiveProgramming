#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b, c, m;
    m = 0;
    cin >> n >> a >> b >> c;
    if (n%a == 0){
        m = max(m, n/a);
    }
    if (n%b == 0){
        m = max(m, n/b);
    }
    if (n%c == 0){
        m = max(m, n/c);
    }
    if (a+b==n || a+c==n || b+c==n){
        m = max(m, 2);
    
    } else {
        m = max(m, 1);
    }
    cout << m;
}
