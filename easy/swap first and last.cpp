
#include <bits/stdc++.h>
using namespace std;
 main() {
    int n,c;
    int b,x;
   cin >>n;
    int a[n];
     for (int i = 0; i < n; i++){
            cin >> a[i];}
       for (int i = 0; i < n/2; i++){
           b=a[i];
           a[i]=a[n-1-i];
           a[n-1-i]=b;}
         
           
          
       for (int i = 0; i < n; i++){
            cout << a[i]<<" ";}
       }
      
  
