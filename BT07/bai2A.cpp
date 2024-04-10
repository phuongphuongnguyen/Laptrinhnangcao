#include <iostream>
using namespace std;
void f(int a[])
{
    cout <<sizeof(a);
}
int main()
{
    int a[]={1,2,3,4,5};
    cout << sizeof a<<endl;
    f(a);

}
