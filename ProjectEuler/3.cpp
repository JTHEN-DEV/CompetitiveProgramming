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
    long long int max = 0;
    long long x = 600851475143;
    for (long long int i = x; i > 1; i-=2){
        if (x%i == 0 && isPrime(i)){
            max = i;
            break;
        }
    }
    cout << max;
}
