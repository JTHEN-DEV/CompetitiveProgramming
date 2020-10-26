#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a, a+4);
    int max = 0;
    int prev;
    int s = 0;
    for (int i = 1; i < 4; i++){
        if (!(a[i-1] == a[i])){
            max++;
        }
    }
    cout << 4-max-1;
}
