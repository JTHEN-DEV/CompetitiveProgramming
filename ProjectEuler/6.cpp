#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int a, b;
    for (int i = 1; i < 101; i++){
        a += i*i;
    }
    for (int c = 1; c < 101; c++){
        b += c;
    }
    b *= b;
    cout << b-a << endl;
}
