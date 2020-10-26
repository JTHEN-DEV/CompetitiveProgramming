#include <bits/stdc++.h>
 
using namespace std;
 
bool lucky(long long int a){
	string b = to_string(a);
	for (int i = 0; i < b.length(); i++){
		if (!(b[i] == '4' || b[i] == '7')){
			return false;
		}
	}
	return true;
}
 
int main(){
	long long int n;
	cin >> n;
    string s = to_string(n);
	int t = 0;
    for (char a : s){
        if (a == '7' || a == '4'){
            t++;
        }
    }
    if (lucky(t)){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
