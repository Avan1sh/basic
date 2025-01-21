#include<iostream> 
using namespace std;
int main(){
    int x ;
    cin >> x;
    int count = 0;
    for (int i = 2; i < x; i++)
    {

        if (x%i==0)
        {
            count++;
        }
        
    }
    if (count>=1)
    {
        cout << "   Not prime number   ";
    }
    else{
        cout << "PRIME number";
    }
    

}