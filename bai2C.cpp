#include <iostream>
using namespace std;
void triangle( int n)
{
    for (int i=n;i>0;i--)
    {
        cout << string(n - i, ' ') << string(i, '*') << endl;
//        for (int j=0;j<=n-i;j++) cout <<" ";
//        for (int j=1;j<=i;j++) cout <<"*";
//        cout<<endl;
    }
}
int main()
{
    int n;
    cin >>n;
    triangle(n);
    return 0;
}
