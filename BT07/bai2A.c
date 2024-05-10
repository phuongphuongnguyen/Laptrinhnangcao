#include <iostream>
using namespace std;
void f(int* a)
{
    cout <<sizeof(a);
}
int main()
{
    int a[6];
    cout << sizeof a<<endl;
    f(&a);

}
