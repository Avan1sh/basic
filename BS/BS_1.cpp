#include <bits/stdc++.h>
using namespace std;
int BSloop(vector<int> &arr,int target){
    int n= arr.size();
    int low =0;
    int high = n-1;

    while (low<=high)
    {
        int mid = (low+high)/2;
        if (arr[mid] == target) return mid;
        else if (target > arr[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int BSrecur(vector<int> &arr, int low ,int high , int target){
    int mid=(low+high)/2;
    if(low<=high){
        if (arr[mid]==target) return target;
        else if (target>arr[mid]) BSrecur(arr,mid+1,high,target);
        else BSrecur(arr,mid-1,high,target);
    }
    else return -1;
}
int main (){
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int target=4;
    int x= BSloop(arr,target);
    if (x==-1) cout<<"Not present";
    else cout<<"Position:  "<<x+1;
    //int n= arr.size();
    //int low =0;
    //int high = n-1;
    //int z = BSrecur(arr,low,high,target);
    //if (z==-1) cout<<"Not present";
    //else cout<<"number is there";
}