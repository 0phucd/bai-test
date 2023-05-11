#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;
    string b;
    cin >> a;
    cin>>b;
    size_t position = a.find(b);
    cout << position+1 << endl; 
    return 0;
}
