#include <bits/stdc++.h>
using namespace std;
 main() {
    int n,b=0;
     long long  t;
    long long c=1;
   cin >>n;   
     for (int i = 1; i <=n; i++){
      
      c*=i;
 
         
           
        
       } while(c>0){
	   
         t=c%10;
       if (t==0){
       	b++;
	   }
	   	c=c/10;
	   
	   }
       cout<< b;
 }
      
