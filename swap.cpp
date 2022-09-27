//wap to take input from user and swap the value using 3rd variable....
#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"enter any two nos:";
    cin>>n1>>n2;
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    cout<<"after swapping "<<"n1="<<n1<<"and n2 ="<<n2;
    return 0;
}