#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin >>x>>y;
    int a[x][y];
    int num=1;
    int row=0,col=-1;
    int x1=x,y1=y;
    while(num<x1*y1)
    {
        while(col<y-1)
        {   col++;
            a[row][col]=num;
            num++;

        }
        while(row<x-1)
        {   row++;
            a[row][col]=num;
            num++;
        }
        while(col>y1-y)
        {
            col--;
            a[row][col]=num;
            num++;
        }
        while(row>x1-x+1)
        {
            row--;
            a[row][col]=num;
            num++;
        }
        x=x-1;
        y=y-1;

    }
    for(int i=0;i<x1;i++){ for (int j=0;j<y1;j++) cout <<a[i][j]<<" ";
     cout <<endl;}
    return 0;

}
