
#include <bits/stdc++.h>
using namespace std;
int main() {
 int a,b,c=0,x,v;
     cin >> a>>b;
    if(b>a ){
        x=a;
            a=b;
            b=x;
    }
    c=a/b;
  v=b*c;
    a-=v;
    cout << a;
}
  
