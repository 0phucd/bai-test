#include <bits/stdc++.h>

using namespace std;


int main() {
    string a;
    string b;
    cin >>a;
    cin >>b;
    
     int count = 0;
     if ( b.length() > a.length()){
	 
    for (int i = 0; i <= b.length() - a.length(); i++) {
        if (b.substr(i, a.length()) == a) {
            count++;
        }
    }
    cout << count << endl;  }

   if ( b.length() < a.length()){
	 
    for (int i = 0; i <= a.length() - b.length(); i++) {
        if (a.substr(i, b.length()) == b) {
            count++;
        }
    }
    cout << count << endl;  }

    return 0;
}
