//wap to take input from user and check whether the given no is prime or not 
#include<iostream>
using namespace std;
int main()
{
    int a,b=0,i;
    cout<<"Enter the no:";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            b++;
        }
    }
    if(b>2)
{
    cout<<"The given no is not prime\n";
}
else
{
    cout<<"The given no is prime";
}
return 0;
}
