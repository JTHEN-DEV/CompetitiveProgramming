#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, s;
    s = 0;
    cin >> n >> k;
    while (n--){
        int a;
        cin >> a;
        if (a <= 5-k){
            s++;
        }
    }
    cout << s/3 << endl;
}
