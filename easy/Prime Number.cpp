
#include <bits/stdc++.h>
using namespace std;
int main() {
 int n,x=0;
     cin >> n;
     if(n < 2){
        cout << n << " khong\n";
    
    }
    for( int i=2 ; i<=sqrt(n); i++){
         if(n % i == 0){
            x++;
        }
    }
       if(x == 0){
        cout << n << "co\n";
    }else{
        cout << n << " khong\n";
    }
}
