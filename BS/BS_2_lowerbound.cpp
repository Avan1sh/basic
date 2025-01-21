#include <bits/stdc++.h>
using namespace std;
int Lowerbound(vector<int> &arr,int y,int n){
    int high=arr.size();
    int low=0;
    int ans=n;
    while (low<=high)
    {
        int mid=(low+high)/2;
        ans=mid;
        if(arr[mid]>=y){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={1,2,3,5,7,9};
    int y=8;
    int n=6;
    cout <<Lowerbound(arr,y,n);
    //int lb = lower_bound(arr.begin(),arr.end(),y)- arr.begin();
    //cout << lb;
    //(direct method to find)
}













