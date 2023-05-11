#include <bits/stdc++.h>

using namespace std;



string cutString(string a, int x, int y) {
    return a.substr(x, y);
}

int main() {
    string a ;
    int x ;
    int y ;
    cin >> a;
    cin >> x >>y;
    string b = cutString(a, x, y);
    cout << b << endl;
    return 0;
}







