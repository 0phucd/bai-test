#include <bits/stdc++.h>
using namespace std;

double random() {
    return ((double) rand() / RAND_MAX); 
}

int random(int a) {
    return (int)(a * random()); 
}

int main() {
    srand(time(NULL)); 
int n;
cin>>n;
 
    for (int i = 0; i < 10; i++) {
        cout << n * random() << " ";
    }
    cout << endl;

    return 0;
}

