#include<iostream>
using namespace std;
int main()
{
    int n=8;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int t = i;
            int b = j;
            int r = (2*n - 2) - j;
            int l = (2*n - 2) - i;
            cout<<(n- min(min(t,b), min(l,r)))<<" ";
        }
        cout<<endl;
    }
}