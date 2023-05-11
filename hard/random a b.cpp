
#include <bits/stdc++.h>

using namespace std;

double random() {
    return (double)rand() / RAND_MAX;
}

int randomRange(int a, int b) {
    int range = b - a;
    return (int)(random() * range + a);
}

int main() {
  
    srand(time(0));
    int x,y;
    cin>> x>>y;
  
    for (int i = 0; i < 10; i++) {
        cout << randomRange(x, y) << " ";
    }
    
    return 0;
}
