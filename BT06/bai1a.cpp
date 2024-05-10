#include <iostream>
using namespace std;
void reverse1(char*a)
{
    char *top=a;
    char *bot=a;
    while(*bot!='\0'){

        bot++;
    }
    bot--;
    while(top<bot){
        char temp;
        temp=*top;
        *top=*bot;
        *bot=temp;
        top++;
        bot--;

    }

}
int main()
{
    char a[]="abcd";
    reverse1(a);
    cout <<a;
    return 0;
}
