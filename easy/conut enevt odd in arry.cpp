
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,c=0,b=0,x,y;
   cin >>n;
    int a[n];
     for (int i = 0; i < n; i++){
            cin >> a[i];}
       for (int i = 0; i < n; i++){
           if (a[i]%2==0){
               c=a[i]; 
               b+=c;
           }   }
             for (int i = 0; i < n; i++){
           if (a[i]%2!=0){
               x=a[i]; 
               y+=x;
           }   
       
 
       }
   cout << b << endl << y;
   
 
   

    }
