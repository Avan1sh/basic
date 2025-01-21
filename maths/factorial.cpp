#include<iostream>
using namespace std;
int fact(int x){
    int count=1;
    for (int i = 1; i <= x; i++)
    {
        count=count*i;
    }
    return count;
}

int main(){
    int n;
    cin>> n;
    int z = fact(n);
    cout << z;

}