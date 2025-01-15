#include<iostream>
using namespace std;

int ArmstrongNum(int n)
{
    int temp = n, Sum =0;

    while(n!=0)
    {
        int digit = n % 10;  // Get the last digit of n
        Sum = Sum + digit * digit * digit;  // Add the cube of the digit
        n=n/10;
    }
    if (Sum==temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }


}
int main()
{
    int (*funcPtrArmstrongNum) (int);
    funcPtrArmstrongNum = ArmstrongNum;
    int inputNum, outputResult=0;
    cout<<"Enter the number to check for Armstrong Number"<<endl;
    cin>>inputNum;
    outputResult = funcPtrArmstrongNum(153);
    if (outputResult==1)
    {
        cout<<"this number is ArmstrongNumber"<<endl;
    }
    else{
        cout<<"this number is not an ArmstrongNumber"<<endl;

    }
    
}