#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long int n){
    long long int factor = 3;
    if (n%2 == 0){
        return false;
    }
    while (true){
        if (factor > n/3){
            return true;
        } else {
            if (n%factor == 0){
                return false;
            } else {
                factor += 2;
            }
        }
    }
}


int main(){
    int n, a, b;
    a = 4;
    cin >> n;
    b = n-a;
    while (!(!isPrime(a) && !isPrime(b))){
        a++;
        b = n-a;
    }
    cout << a << " " << b << endl;
}
