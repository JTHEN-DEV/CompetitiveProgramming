#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    vector<string> db;
    vector<int> num;
    for (int i = 0; i < n; i++){
        cin >> s;
        if (find(db.begin(), db.end(), s) != db.end()){
            num[distance(db.begin(), find(db.begin(), db.end(), s))]++;
            cout << s << num[distance(db.begin(), find(db.begin(), db.end(), s))] << endl;
        } else {
            db.push_back(s);
            num.push_back(0);
            cout << "OK" << endl;
        }
    }
}
