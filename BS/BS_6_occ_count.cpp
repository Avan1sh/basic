#include <bits/stdc++.h>
using namespace std;

int first_occ(vector<int> &arr,int x,int n){
    int low=0;
    int high=n-1;
    int first = -1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if (arr[mid]==x){
            first=mid;
            high =mid-1;
        } 
        else if (x>arr[mid]) low=mid+1;
        else high=mid-1;
    }
    return first;
}
int last_occ(vector<int> &arr,int x,int n){
    int low=0;
    int high=n-1;
    int last = -1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if (arr[mid]==x){
            last=mid;
            low=mid+1;
        } 
        else if (x>arr[mid]) low=mid+1;
        else high=mid-1;
    }
    return last;
}

int main(){
    vector<int> arr={1,2,3,3,3,5,5,7,9};
    int x=3;
    int n=arr.size();
    int first=first_occ(arr,x,n);
    int last=last_occ(arr,x,n);
    cout << first;
    cout << last;
}
