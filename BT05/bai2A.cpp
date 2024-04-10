#include <iostream>
using namespace std;
int factorial(int x)
{   if(x==0)
{
    return 1;
}

    cout <<x<<' '<<&x<<endl;
    return x*factorial(x-1);
}
int main()
{
    int n=5;
    cout <<factorial(n);
    return 0;

}
