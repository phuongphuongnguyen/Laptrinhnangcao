#include <iostream>
using namespace std;
int reverseNumber(int n)
{
    int m=0;
    while(n>0) {m+=n%10; m*=10; n/=10;}
    return m/10;
}
int main()
{
    int T;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        int a,b;
        cin >>a>>b;
        int times=0;
        for (int i=a;i<=b;i++) if (i==reverseNumber(i)) times++;
        cout <<times<<endl;
    }
        return 0;
}
