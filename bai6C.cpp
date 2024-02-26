#include <iostream>
using namespace std;
void matrix(int n)
{
    for (int i=1;i<=n;i++)
        {for(int j=i;j<=n;j++) cout<<j;
        for (int j=1;j<=i-1;j++) cout <<j;
        cout<<endl;}

}
int main()
{
    int n;
    cin>>n;
    matrix(n);
    return 0;
}
