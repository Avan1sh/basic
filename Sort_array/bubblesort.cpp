#include<iostream>
using namespace std ;
void bubblesort(int arr[],int n){
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 0; j <= i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }   
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<" ";
        cout<<arr[i] ;
    }
}
int main(){
    int arr[]= {1,6,2,9,5,3,7,4};
    int n = 8;
    bubblesort(arr,n);  
}