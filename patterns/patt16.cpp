#include<iostream>
using namespace std;
int main()
{
    
    int n=6;
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j<='A'+(n-i-1) ;j++)
        {
            cout << j;

        }
        cout << endl;
    }    







}