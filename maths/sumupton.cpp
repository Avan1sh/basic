#include<iostream>
using namespace std;

int f(int x , int y){  
    if (x<1)
    {
        cout << y;   
        return y;
    }
    f(x-1, y+x);
    
   
}
int main(){
    int p;
    cin >> p;
    f(p,0);

}
