#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, a, high, low;
    cin >> n;
    high = 0;
    low = 0;
    a = 0;
    for (int i = 0; i < n; i++){
        cin >> k;
        if (i == 0){
            high = k;
            low = k;
        } else if (k < low){
            low = k;
            a++;
        } else if (k > high){
            high = k;
            a++;
        }
    }
    cout << a << endl;
}
