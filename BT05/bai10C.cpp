#include <iostream>
#include <stdlib.h>
using namespace std;
void arrayrand(int *a, int n)
{
    for (int i=0;i<n;i++)
    {
       a[i]=rand()%50;

    }
}
bool checkdiv25(int a, int b,int c)
{
    return (a+b+c)%25==0;
}

int main()
{

    int n;
    cin >>n;
    int a[n];
    arrayrand(a,n);
    for(int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
            for (int k=j+1;k<n;k++)
        {
            if (checkdiv25(i,j,k)) cout <<i<<' '<<j<<' '<<k<<endl;
        }
    }
    return 0;
}
