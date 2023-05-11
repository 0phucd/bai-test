#include <bits/stdc++.h>


using namespace std;


int main() {
    string a ;
    string b ;
    cin >>a;
    cin>>b;
       int x = 0;
  for (int i = 0; i < a.length(); i++) {
    char c = a[i];
    if (b.find(c) == string::npos) {
        x++;
    }
}
    cout << x << endl;
    return 0;
}
