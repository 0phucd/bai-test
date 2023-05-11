
#include <bits/stdc++.h>
using namespace std;
 main() {
    int n,c=0;
    float b;
   cin >>n;
    int a[n];
     for (int i = 0; i < n; i++){
            cin >> a[i];}
       for (int i = 0; i < n; i++){
           
               c+=a[i]; 
              
              }
   b=(float)c/(float)n;


    printf("%.2f",  b);
 
    return 0;
}     
      
  
   
