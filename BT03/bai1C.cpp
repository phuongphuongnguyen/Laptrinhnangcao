#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
bool checkDuplicateNumbers(const vector<int>& numbers)
{
    unordered_set<int> listcheck;
    for (int x:numbers)
    {
        if (listcheck.find(x)==listcheck.end()) listcheck.insert(x);
        else return true;
    }
    return false;
}
int main()
{
    int N;
    cin>> N;
    vector<int> numbers(N);
    for(int i=0;i<N;i++) cin >> numbers[i];
    if(checkDuplicateNumbers(numbers)) cout<<"Yes"; else cout <<"No";
    return 0;
}
