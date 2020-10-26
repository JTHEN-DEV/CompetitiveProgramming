#include <bits/stdc++.h>

using namespace std;

bool search(string word, vector<string> s) {
        int len = word.length();
        map<int, char> m;
        for (int i = 0; i < word.length(); i++){
            if (word[i] != '.'){
                m[i] = word[i];
            }
        }
        cout << m.size() << endl;
        vector<string> f = s;
        for (pair<int,char> x : m){
            cout << x.first << " " << x.second << endl;
            for (int a = 0; a < f.size(); a=a){
                if(f[a][x.first] != x.second || f[a].length() != len){
                    f.erase(f.begin() + a);
                } else {
                    a++;
                }
            }
        }
        if (f.size() != 0){
            return true;
        } else {
            return false;
        }
    }

int main(){
    vector<string> s;
    s.push_back("bad");
    s.push_back("mad");
    s.push_back("dad");
    cout << search(".", s) << endl;
}
