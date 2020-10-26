#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++){
        cin >> ar[i];
    }
    sort(ar, ar + n);
    int s = 0;
    for (int a = 0; a < n-1; a++){
        s += ar[n-1] - ar[a];
    }
    cout << s << endl;
}
