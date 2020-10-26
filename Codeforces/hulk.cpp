#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s = "";
    for (int i = 0; i < n; i++){
        if (i%2){
            s+="I love";
        } else {
            s+="I hate";
        }
        if (!(i==n-1)) s+=" that ";
    }
    s+= " it";
    cout << s;
}
