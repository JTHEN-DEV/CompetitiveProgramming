#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int ar[4];
    for (int i = 0; i < 4; i++){
        cin >> ar[i];
    }
    sort(ar, ar+4, greater<int>());
    long long int ab = ar[1];
    long long int ac = ar[2];
    long long int bc = ar[3];
    cout << (bc+ac-ab)/2 << " " << (ab+bc-ac)/2 << " " << (ac+ab-bc)/2 << endl;
}
