#include <bits/stdc++.h>
using namespace std;

int main() { int n,t=n+n;
            int max =0,min=9999999999999;
            cin>>n;
   int a[n] ;
   int b[n] ; 
   
   int i, index;
  
  for (int i = 0; i < n; i++){
            cin >> a[i];}
  for (int i = 0; i < n; i++){
            cin >> b[i];}
   int z[t];
   
    int x = 0;
 
   for(i = 0; i < n; i++) {
      z[x] = a[i];
      x++;
   }
 
   for(i = 0; i < n; i++) {
      z[x] = b[i];
      x++;
   }

 for (i=0; i<x-1 ; i++){
 	for (int j=i+1;j<x; j++ ){
 		if (z[i]>z[j]){
 			int y =z[i];
 			
 			z[i]=z[j];
 			z[j]=y;
		 }
 		
	 }
 	
 
    }
    

   

 for (i=0; i<x ; i++){
 
      cout << z[i] << " ";}
}
   
