#include<iostream>
using namespace std;
int main()
{
    int n = 6;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j<i; j++)
        {
            cout << j;           
        }
        for (int j = 1; j<2*n-(2*i+1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j<i; j++)
        {
            cout << j;          
        }
        cout << endl;
    }
} 