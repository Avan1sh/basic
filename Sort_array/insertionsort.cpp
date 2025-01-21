#include<iostream>
using namespace std ;
void insertionsort(int arr[], int n){
    for (int i = 0; i <= n-1; i++)
    {
        int j=i;
        while (j>0 && arr[j]<arr[j-1])
        {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }      
    }
    for (int i = 0; i < n; i++)
    {
        cout<<" ";
        cout<< arr[i];
    }
}
int main(){
    int arr[] = {13,46,24,52,20,9};
    int n = 6;
    insertionsort(arr,n);
}