#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,k,d;
    cin>>m>>n>>k;
    int a[m+2][n+2];
    d=m*n-k;

    for (int i=1;i<=m;i++)
                    for (int j=1;j<=n;j++)  a[i][j]=-2;
    while (k>0)
    {
        int x,y;
        x=time(NULL)%m+1;
        y=time(NULL)%n+1;
        if (a[x][y]==-2)
            {
                a[x][y]=-1;
                k--;
            }

    }


    while(d>0)
    {
        int x,y;
        cin>>x>>y;
        if (a[x][y]==-1)
            {
                cout<<"You're dead!"<<endl;
                for (int i=1;i<=m;i++){
                    for (int j=1;j<=n;j++) cout<<a[i][j]<<' ';
                    cout<<endl;
                }
                break;
            }
        else
            {
                d--;
                int temp=0;
                for (int i=x-1;i<=x+1;i++)
                    for (int j=y-1;j<=y+1;j++) if (a[i][j]==-1) temp++;

                a[x][y]=temp;
                for (int i=1;i<=m;i++){
                    for (int j=1;j<=n;j++)
                        {
                            if (a[i][j]>=0) cout<<a[i][j]<<' ';
                            else cout<<"* ";

                        }
                        cout<<endl;
                    }
            }
    }
}
