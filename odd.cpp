//wap to take input from user and find the no is odd or even...
#include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"enter any number:";
    cin>>n1;
    if(n1 % 2 == 0)
    {
        cout<<n1<<"the given no is even";
    }
    else
    {
        cout<<n1<<"  the given number is odd";
    }
    return 0;
}