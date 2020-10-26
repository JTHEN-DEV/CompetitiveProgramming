#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, odd, even, io, ie;
    odd = 0;
    even = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a%2 == 1){
            odd++;
            io = i+1;
        } else {
            even++;
            ie = i+1;
        }
    }
    if (odd == 1){
        cout << io;
    } else {
        cout << ie;
    }
}
