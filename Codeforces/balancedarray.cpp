#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int a;
        cin >> a;
        if ((a/2)%2){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            string oute = "";
            string outo = "";
            int i;
            for (i = 2; i < (3*a)/2-2; i+=6){
                oute += to_string(i) + " " + to_string(i + 2) + " ";
                outo += to_string(i-1) + " " + to_string(i + 3) + " ";
            }
            cout << oute << " " << outo << endl;
        }
    }
}
