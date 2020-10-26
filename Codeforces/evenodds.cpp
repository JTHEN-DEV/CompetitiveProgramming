#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    if ((n+n%2)/2 < k){
        cout << (k-(n+n%2)/2)*2;
    } else {
        cout << k*2 -1;
    }
}
