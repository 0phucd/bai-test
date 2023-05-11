#include <bits/stdc++.h>
using namespace std;

int main() { int n,t;
            
            cin>>n;
   int a[n] ;
   int b[n] ; 
            float c[n];
   
   int i;
  
  for (int i = 0; i < n; i++)
            cin >> a[i];
  for (int i = 0; i < n; i++)
            cin >> b[i];
              for (int i = 0; i < n; i++){
              	if (a[i]<b[i]){
              		int x =a[i];
              		a[i]=b[i];
              		b[i]=x;
              		
				  }
                 c[i]=(float)a[i]/(float)b[i];}
                   
            
                 
          
  

 for (i=0; i<n ; i++){
 
      cout << c[i] << " ";}
}
   
