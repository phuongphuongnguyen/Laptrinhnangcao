#include <iostream>
#include <math.h>
using namespace std;
int roundnumbers(double x)
{
    if(x-floor(x)<0.5) return floor(x);else return floor(x)+1;
}
int main()
{
    double x;
    cin >>x;
    cout <<roundnumbers(x);
    return 0;


}
