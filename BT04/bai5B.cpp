#include <bits/stdc++.h>
//#define pii pair<int,int>
using namespace std;

int main()
{
       long long x=1000000000;
    int* a = new int[x];
    int n;
    cin>>n;
    a[n]=1;
    for (int i=0;i<x;i++)
        if (a[i]==1)
        {
            cout<<i;
            break;
        }
    return 0;
}
