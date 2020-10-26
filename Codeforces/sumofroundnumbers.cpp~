#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    string out;
    cin >> t;
    while (t--){
        cin >> n;
        out = "";
        int s = 0;
        for (int i = to_string(n).size()-1; i >= 0; i--){
            if ((int)(n/pow(10,i)) != 0){
                out += to_string((int)((int)(n/(pow(10, i))) * pow(10,i))) + " ";
                s++;
            }
            n -= (int)(n/pow(10,i)) * pow(10,i);
        }
        cout << s << endl;
        cout << out << endl;
    }
}
