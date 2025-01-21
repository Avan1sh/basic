#include<iostream>
using namespace std;
int function(int x){
    if(x == 0)return x;
    else return x+function(x-1);
}
int main(){
    cout<<function(6);
    
}