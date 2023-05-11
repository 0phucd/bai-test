
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,c,d;
    
 cin >> a >> b;
  if (a%2==0){
      c=1;      
  }
    else c=0;
     if (b%2==0){
      d=1;
      
  }
    else d=0;
   
    if (c==1 && d==1 ){
        cout<< " cung chan";
    }
      if (c==0 && d==0 ){
        cout<< " cung le";
    }
       if (c==1 && d==0 || c==0 && d==1  ){
        cout<< " 1 chan 1 le";
    }
    }


