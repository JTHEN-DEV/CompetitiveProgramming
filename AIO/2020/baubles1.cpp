#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("baublesin.txt", "r", stdin);
        freopen("baublesout.txt", "w", stdout);
    int ro, bo, spare, rp, bp;
    cin >> ro >> bo >> spare >> rp >> bp;
    if (rp == 0 && bp == 0){
        cout << 0 << endl;
        return  0;
    }
    if (rp == 0 && bo - bp + spare + 1 >= 0){
        cout << bo - bp + spare + 1 << endl;
        return 0;
    } else if (bp == 0 && ro - rp + spare + 1 >= 0){
        cout << ro - rp + spare + 1 << endl;
        return 0;
    }
    if (ro < rp){
        int f = min(rp - ro, spare);
        spare -= f;
        ro += f;
    }
    if (bo < bp){
        int e = min(bp - bo, spare);
        spare -= e;
        bo += e;
    } 
    int a = min(ro, rp);
    ro -= a;
    rp -= a;
    a = min(bo, bp);
    bo -= a;
    bp -= a;
    if (spare < rp + bp){
        cout << 0 << endl;
        return 0;
    }
    if (rp == 0 && bp == 0){
        cout << min(ro + spare + 1, bo + spare + 1);
    } else if (rp == 0){
        cout << ro + spare + 1;
    } else if (bp == 0){
        cout << bp + spare + 1;
    } else {
        cout << spare - bp - rp + 1<< endl;
 }
}

