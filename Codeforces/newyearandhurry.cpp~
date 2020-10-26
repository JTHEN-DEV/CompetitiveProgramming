#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int h = 4 * 60;
    h -= k;
    int i;
    for (i = 1; i < n+1; i++){
        if (h >= i*5){
            h -= i*5;
        } else {
            break;
        }
    }
    cout << i-1;
}
