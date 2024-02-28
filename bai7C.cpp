#include <iostream>
using namespace std;
int main()
{
    int x,y(-1);
    do{
        cin >>x;
        if(y!=x) cout <<x<<" ";
        y=x;
        }while(x>=0);
    return 0;
}
