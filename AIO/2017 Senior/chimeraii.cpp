#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("chimin.txt", "r", stdin);
    freopen("chimout.txt", "w", stdout);
    string a, b, c;
    int n, l;
    n = 0;
    cin >> l;
    cin >> a >> b >> c;
    int prev = 0;
    if (b == c || a == c){
        cout << "SUCCESS" << endl;
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < l; i++){
        if (i == 0 && a[i] == c[i] && b[i] == c[i]){
            if (b[i+1] == c[i+1]){
                prev = 2;
            } else if (a[i+1] == c[i+1]){
                prev = 1;
            } else {
                cout << "PLAN FOILED" << endl;
                return 0;
            }
        } else if (a[i] == c[i]){
            if (prev == 2 && b[i] != c[i]){
                n++;
            }   
            prev = 1;
        } else if (b[i] == c[i]){
            if (prev == 1){
                n++;
            }
            prev = 2;
        } else {
            cout << "PLAN FOILED" << endl;
            return 0;
        }
    }
    cout << "SUCCESS" << endl;
    cout << n << endl;
}
