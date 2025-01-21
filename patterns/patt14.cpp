#include<iostream>
using namespace std;
int main()
{
    int n=6;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i ;j++)
        {
            string x="";
            if (j==1)
            {
                x="A";
            }
            if (j==2)
            {
                x="B";
            }
            if (j==3)
            {
                x="C";
            }
            if (j==4)
            {
                x="D";
            }
            if (j==5)
            {
                x="E";
            }
            if (j==6)
            {
                x+"F";
            }
                       
            cout << x;
        }
        cout << endl;
        
    }
    







}