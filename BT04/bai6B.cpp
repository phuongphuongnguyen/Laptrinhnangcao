#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;
const int maxx=100;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    int num, k(0);
    int a[maxx];
    while (ss>>num)
    {
        a[k++]=num;
    }
    for(int i=0;i<k-2;i++)
        for(int j=i+1;j<k-1;j++)
        for(int f=j+1;f<k;f++)
            if(a[i]+a[j]+a[f]==0)
            {cout << a[i]<<' '<<a[j]<<' '<<a[f];
            return 0;}
    cout<< "khong co tong ba";
    return 0;

}
