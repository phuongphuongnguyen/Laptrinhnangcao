#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int timkiemnhiphan(int *a,int left,int right,int x)
{
    int mid=(left+right)/2;
    if(mid==left) return 0;

    if(x<a[mid])
    {
        right=mid;
        return timkiemnhiphan(a,left,right,x);
    }
    else if(x>a[mid])
    {
        left=mid;
        return timkiemnhiphan(a,left,right,x);
    }
    else if (x==a[mid]) return mid;

}
int main()
{
    int a[120];
    string s;
    getline(cin,s);
    stringstream ss(s);
    int num,k(0);
    while(ss>>num)
    {
        a[k++]=num;
    }
    int x;
    cin >>x;
    cout<<timkiemnhiphan(a,0,k-1,x);
    return 0;


}
