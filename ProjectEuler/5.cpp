#include <bits/stdc++.h>

using namespace std;

bool isDivisible(int n){
    for (int i = 1; i < 21; i++){
        if (n%i != 0){
            return false;
        }
    }
    return true;
}

int main(){
    bool b = false;
    int a = 1;
    while (!b){
        b = isDivisible(a);
        a++;
    }
    cout << a-1 << endl;
}
