#include <iostream>
using namespace std;
void sapxep(int n ,int* arr)
{
    while(n>1)
    {for(int i=0;i<n-1;i++)
        if(arr[i]>arr[i+1])
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    n--;}
}
int main()
{
    int n;
    cin >>n;
    int nam[n],nu[n];
    for(int i=0;i<n;i++)
        cin >>nam[i]>>nu[i];
    sapxep(n,nam);
    sapxep(n,nu);
    for (int i=0;i<n;i++)
        if (nam[i]<nu[i]) {cout<<"no";return 0;}
    cout<<"yes";
    return 0;


}
