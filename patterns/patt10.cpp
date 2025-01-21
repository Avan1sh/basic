#include<iostream>
using namespace std;
int main(){
    int n=5;
    
    for (int i = 0; i <= 2*(n-1)+1; i++)
    {
        int x= i;
        if (i>n+1)x=2*(n-i) ;
            for (int j = 0; j<=x; j++)
                {

                    cout << "*";
                }
                    cout << endl;
        
    }
    
    
}