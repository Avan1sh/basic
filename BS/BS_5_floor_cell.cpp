#include <bits/stdc++.h>
using namespace std;
int Cell(vector<int> &arr,int y,int n){
    int high=n-1;
    int low=0;
    int ans=-1;
    while (low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=y){
            ans=arr[mid];
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int Floor(vector<int> &arr,int y,int n){
    int high=n-1;
    int low=0;
    int ans=-1;
    while (low<=high){
        int mid=(low+high)/2;
        if (arr[mid]<=y){
            ans=arr[mid];
            low=mid+1;
        }
        else high=mid-1;
    }
    return ans;
}
int main(){
    vector<int> arr={1,2,3,5,7,9};
    int y=4;
    int n=arr.size();
    cout <<"FLOOR-->"<<Floor(arr,y,n)<<endl;
    cout <<"CELL-->"<<Cell(arr,y,n);
}
