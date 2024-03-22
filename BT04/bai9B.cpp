#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int x[n],y[n];
    for (int i=0;i<n;i++)
        cin >>x[i]>>y[i];
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
        if(abs(x[i]-x[j])==abs(y[i]-y[j])
        || x[i]==x[j]||y[i]==y[j]) {cout <<"yes";return 0;}
    cout <<"no";
    return 0;
}
