#include <bits/stdc++.h>
using namespace std;


int main()
{
    int amount;
    cout << "Nhap so tien can doi (VND): ";
    cin >> amount;
    int cothedoi[] = {500000, 100000, 50000, 10000, 5000, 2000, 1000};
    int sotien[sizeof( cothedoi)/sizeof( cothedoi[0])] = {0};
    int i = 0;

    while (amount > 0 && i < sizeof( cothedoi)/sizeof( cothedoi[0]))
    {
       sotien[i] = amount /  cothedoi[i];
        amount %=  cothedoi[i];
        i++;
    }

    if (amount > 0)
    {
        cout << "Khong co cach doi tien";
       
    }


    for (i = 0; i < sizeof( cothedoi)/sizeof( cothedoi[0]); i++)
    {
        if (sotien[i] > 0)
        {
            cout << sotien[i] << " to " <<  cothedoi[i] << " VND" << endl;
        }
    }

    return 0;
}

