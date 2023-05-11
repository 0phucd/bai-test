#include <bits/stdc++.h>
using namespace std;

const string k[] = {"", "mot", "hai", "ba", "bo", "nam", "sau", "bay", "tam", "chin", "muoi",
                       "muoi mot", "muoi hai", "muoi ba", "muoi bon", "muoi nam", "muoi sau ", "muoi bay", "muoi tam ", "muoi chin"};
const string km[] = {"", "", "hai  muoi", "ba muoi", "bon muoi", "nam muoi", "sau muoi", "bay muoi", "tam muoi", "chin muoi"};

string mat(int n) {
    if (n < 0) return "tien am phu " + mat(-n);
    if (n < 20) return k[n] ;
    if (n < 100) return km[n/10] + ((n % 10 != 0) ? " " : "") + k[n%10];
    if (n < 1000) return k[n/100] + " tram" + ((n % 100 != 0) ? "  " : "") + mat(n%100);
    if (n < 1000000) return mat(n/1000) + " nghin" + ((n % 1000 != 0) ? " " : "") + mat(n%1000);
    if (n < 1000000000) return mat(n/1000000) + " trieu" + ((n % 1000000 != 0) ? " " : "") + mat(n%1000000);
    return "qua";
}

int main() {
    int a;
 
    cin >> a;
    string b = mat(a);
    cout << b << endl;
    return 0;
}
