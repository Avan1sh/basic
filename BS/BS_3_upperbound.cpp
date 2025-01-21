#include <bits/stdc++.h>
using namespace std;
int upper_bound(vector<int> &arr,int y,int n){
    int high=arr.size();
    int low=0;
    int ans=n;
    while (low<=high)
    {
        int mid=(low+high)/2;
        ans=mid;
        if(arr[mid]>y){
            high=mid-1;
            ans=mid;  
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
    cout <<upper_bound(arr,y,n); 
    //int ub = upper_bound(arr.begin(),arr.end(),y)- arr.begin();
    //cout << ub;
    //(direct method to find)
}


