#include <bits/stdc++.h>

using namespace std;



int main() { int a,b;
	cin >>a>>b;


    double x= 0;

    if (a < 0 || b > 24 ||b  <= a) { 
       cout << "vo ly ";
    }

    int y = b - a;

    if (y <= 2) {
        x = y * 70;
    } else {
        x = 2 * 70 + (y - 2) * 50;
    }

    if (y >= 24) {
        x += 160;
    }

    if (b > 8 && y >= 24) {
        x += (b - 8) * 40;
    }

    if (x < 0) {
        cout << "Thoi gian khong hop le." << endl;
    } else {
        cout << x << "k" << endl;
    }

    return 0;
}
