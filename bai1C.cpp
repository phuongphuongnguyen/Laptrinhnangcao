#include <iostream>
using namespace std;
bool prime(int x)
{
    bool kiemtra=true;
    if (x<=0) kiemtra=false;
    for (int i=2;i<x/2;i++)
    {
        if (x%i==0) kiemtra=false;
    }
    return kiemtra;
}
int main()
{
    int x;
    cin >> x;
    if (prime(x)) cout << "yes"; else cout << "no";
    return 0;
}
