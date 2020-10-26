#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n <= 2){
        cout << "NO" << endl;
    }
    return 0;
    if (n%4 == 0){
        cout << "YES" << endl;
        cout << n/2 << endl;
        for (int i = 1; i < n; i += 4){
            cout << i << " " << i + 3 << " ";
        }
        cout << endl;
        cout << n/2 << endl;
        for (int i = 1; i < n; i += 4){
            cout << i + 1 << " " << i + 2 << " ";
        }
        cout << endl;
    } else if (n%2 == 0){
        cout << "NO" << endl;
    } else if ((n-3)%4 == 0) {
        cout << "YES" << endl;
        cout << n/2 + 1 << endl;
        cout << "1 2 ";
        for (int i = 4; i < n; i += 4){
            cout << i << " " << i + 3 << " ";
        }
        cout << endl;
        cout << n/2 << endl;
        cout << "3 ";
        for (int i = 4; i < n; i += 4){
            cout << i+1 << " " << i + 2 << " ";
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }
}
