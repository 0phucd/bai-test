#include <bits/stdc++.h>
using namespace std;

int main() { int n,t=n+n;
            
            cin>>n;
   int a[n] ;
   int b[n] ; 
   
   int i;
  
  for (int i = 0; i < n; i++){
            cin >> a[i];}
  for (int i = 0; i < n; i++){
            cin >> b[i];}
   int z[t];
   
   int k = 0;
 
   for(i = 0; i < n; i++) {
      z[k] = a[i];
      k++;
   }
   
 
   for(i = 0; i < n; i++) {
      z[k] = b[i];
     k++;
   }


 for (i=0; i<k ; i++){
 
      cout << z[i] << " ";}
}
   
