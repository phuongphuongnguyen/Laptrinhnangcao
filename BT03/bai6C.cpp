#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n][n];
    for(int i=0;i<n;i++)
        for (int j=0;j<n;j++) a[i][j]=0;
    int num=0;
    int row=0,col=(n-1)/2;
    while(num<n*n)
    {   if (a[row][col]==0)
        {
            a[row][col]=++num;
            row--;
            col++;
            if(row==-1&&col==n)
            {
                col--;
                row+=2;
            }
            else if(row==-1)row=n-1;
            else if(col==n)col=0;
        }
        else {col--;
            row+=2;}
    }
    for(int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++) cout <<a[i][j]<<" ";
            cout<<endl;
        }
    return 0;
}
