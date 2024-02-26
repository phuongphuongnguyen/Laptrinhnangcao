#include <iostream>
#include <math.h>
using namespace std;
void triangle(int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for( int j=-n+1;j<=n-1;j++)
        {
            if(abs(j)>i) cout<<" ";else cout <<  "*";

        }
        cout<<endl;
    }
}
int main ()
{
    int n;
    cin>>n;
    triangle(n);
    return 0;
}
