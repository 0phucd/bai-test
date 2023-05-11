#include <bits/stdc++.h>

using namespace std;



int main() {
    string a;
    string b ;
    cin >>a;
    cin >>b;
     int t = 0;
    long long x = 0;
    while ((x = b.find(a, x)) != string::npos) {
        t++;
        x += a.size();
    }
    cout  << t << endl;
    return 0;
}
