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
    long long int a = 2;
    long long int n = 3;
    while (n < 2000000){
        if (isPrime(n)){
            a+=n;
        }
        n += 2;
    }
    cout << a << endl;
}
