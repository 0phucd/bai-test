#include <bits/stdc++.h>

using namespace std;



int main() { int x;
	cin >>x;


    float y= 0;

    if (x < 0) { 
        cout<< "ve me nuoi";
    }

  

    if (x < 20) {
        y = ((float)x * 5 )/100;
    } else if (x>=20 && x<=50) {
       y = ((float)x * 10)/100;
    }

    else if ( x>50) {
       y = ((float)x * 20)/100;
    }

    
        cout << y << " trieu" << endl;
    

    return 0;
}
