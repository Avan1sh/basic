#include<iostream>
using namespace std;

int myFunction(int x, int y) {
  if (x>y)
  {
    cout<< y;
    y++;
    myFunction(x,y);
  }
  
}
int main(){
    int n;
    cin>> n;
    myFunction(n,1);
}