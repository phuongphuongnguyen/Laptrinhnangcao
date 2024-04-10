#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int xucxac(int *p)
{
    srand(time(NULL));
    int r=rand()%6+1;
    *p+=r;
    return r;

}
int main()
{
    int player1=0,player2=0;
    while(player1<20 && player2<20)
    {

        cout <<"luot choi cua nguoi choi 1:";
        cin.ignore();
        cout<<xucxac(&player1)<< " .Tong diem cua nguoi choi 1: "<<player1<<endl;
        cout <<"luot choi cua nguoi choi 2";
        cin.ignore();
        cout<<xucxac(&player2)<<" .Tong diem cua nguoi choi 2: "<<player2<<endl;


    }
    if(player1>=20) cout <<"nguoi choi 1 Win";else cout <<"nguoi choi 2 Win";
    return 0;

}
