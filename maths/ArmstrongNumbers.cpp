// #include<bits/stdc++.h>
// using namespace std;
// // void armstrongNumber(int x){
// //     int numOfDigit = 0,temp = x,armNum = 0;
// //     while(temp!=0){
// //         temp/=10;numOfDigit++;
// //     }
// //     temp = x;
// //     while(temp!=0){
// //         int lastDigit = temp%10;
// //         armNum += (int)pow(lastDigit,numOfDigit);
// //         temp/=10;
// //     }
// //     cout<<armNum;
// // }
// // void armstrongNumber(int x) {
// //     int numOfDigit = 0, temp = x, armNum = 0;
// //     while (temp != 0) {
// //         temp /= 10;
// //         numOfDigit++;
// //     }
// //     temp = x;
// //     while (temp != 0) {
// //         int lastDigit = temp % 10;
// //         armNum += (int) pow(lastDigit, numOfDigit); // Update armNum within the loop
// //         cout << armNum << endl;
// //         temp /= 10;
// //     }
// //     cout << armNum;
// // }
// void ArmstrongNumber(int n)
// {
//     int originalno = n;
//     int count = 0;
//     int temp = n;
//     while (temp != 0)
//     {
//         count++;
//         temp = temp / 10;
//     }
//     int sumofpower = 0;
//     while (n != 0)
//     {
//         int digit = n % 10;
//         sumofpower += pow(digit,count);
//         n /= 10;
//     }
//     cout<<sumofpower;
//     //return (sumofpower == originalno);
// }

// int main()
// {
//     ArmstrongNumber(153);


// }

#include <bits/stdc++.h>
using namespace std;
int power(int k,int kount){
    int ans = 1;
    for(int i = 0;i<kount;i++){
        ans *= k;
    }
    return ans;
}
bool ArmstrongNumber(int n)
{
    int originalno = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumofpower += power(digit,count);
        n /= 10;
    }
    
    return (sumofpower == originalno);
}
int main()
{
    int n1 = 153;
    if (ArmstrongNumber(n1))
    {
        cout << "Yes, it is an Armstrong Number\n";
    }
    else
    {
        cout << "No, it is not an Armstrong Number\n";
    }
    return 0;
}