#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n, a;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        cout << a/2 - (!(a%2)) << endl;
    }
}
