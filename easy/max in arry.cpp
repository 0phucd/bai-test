
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,c=0,b=0;
   cin >>n;
    int a[n];
     for (int i = 0; i < n; i++){
            cin >> a[i];}
       for (int i = 0; i < n; i++){
           if (b< a[i]){
               b=a[i];  }
    }   
    cout << b;
}
   
