#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int t, a, b;
    a = -1;
    t = 0;
    for (int i = 0; i < n; i++){
        cin >> b;
        if (a != b){
            t++;
        }
        a = b;
    }
    cout << t;
}
