#include <iostream>
using namespace std;
int main()
{
    int col,row;
    cin >> row >> col;
    char a[col+2][row+2];
    for(int i=0;i<row+2;i++) a[0][i]=0;
    for(int i=0;i<row+2;i++) a[col+1][i]=0;
    for(int i=1;i<col+1;i++) a[i][0]=0;
    for(int i=1;i<col+1;i++) a[i][row+1]=0;
    for(int i=1;i<row+1;i++)
    {
        for(int j=1;j<col+1;j++) {cin >> a[j][i];
        if (a[j][i]!='*') a[j][i]=char(48);}
    }
    for(int i=1;i<row+1;i++)
    {
        for(int j=1;j<col+1;j++)
        {   if(a[j][i]!='*')
            {
                if(a[j-1][i]=='*') a[j][i]++;
                if(a[j+1][i]=='*') a[j][i]++;
                if(a[j+1][i+1]=='*') a[j][i]++;
                if(a[j][i-1]=='*') a[j][i]++;
                if(a[j-1][i-1]=='*') a[j][i]++;
                if(a[j][i+1]=='*') a[j][i]++;
               if(a[j+1][i-1]=='*') a[j][i]++;
               if(a[j-1][i+1]=='*') a[j][i]++;
            }
        }
    }
    for(int j=1;j<row+1;j++)
    {
        for(int i=1;i<col+1;i++) cout<< a[i][j]<<" ";
        cout << endl;
    }
    return 0;
}
