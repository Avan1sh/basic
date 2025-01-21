#include <bits/stdc++.h>
using namespace std;
int find_ele(vector<int> &arr){
    int max=0;
    int second_largest =0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (max<arr[i])
        {
            second_largest=max;
            max=arr[i];
        }
    }
    return max  ;/*second_largest*/ 
}
int main(){
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int element = find_ele(arr);
    cout <<"Given Array" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout <<arr[i]<<" ";   
    }
    cout << endl;
    cout << "Array Largest element--"<<endl;
    cout << element;   
}
