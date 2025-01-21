#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int z=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[z])
            {
                z=j;
            }
        }
        int temp=arr[i];
        arr[z]=arr[i];
        arr[i]=temp;
        cout << arr[i];
    }
}
int main(){
    int arr[] = {13,46,24,52,20,9};
    int n = sizeof(arr) / sizeof(arr[0]); 
    selection_sort(arr,n);
}
