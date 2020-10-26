#include <bits/stdc++.h>

using namespace std;
// 2, 6, 14
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int s = 0;
        for (int i = 1; i < n/2; i++){
            s += 4*i;
        }
        s+=2;
        cout << s << endl;
    }
}
