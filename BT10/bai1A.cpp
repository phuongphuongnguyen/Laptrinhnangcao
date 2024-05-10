#include <iostream>
#include <cstring>
using namespace std;
char* concat(const char* s1, const char* s2)
{
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    char* temp = new char [n1 + n2 +1];
    strcpy(temp,s1);
    strcat(temp,s2);
    return temp;
}
