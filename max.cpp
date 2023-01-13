//wap to to find the maximum no between three nos.
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter the first no:";
    cin>>n1;
    cout<<"Enter the second no:";
    cin>>n2;
    cout<<"Enter the third no:";
    cin>>n3;
    if(n1>n2 && n1>n3)
    {
        cout<<"First no is maximum.";
    }
    else if(n2>n3)
    {
        cout<<"Second no is maximum.";
    }
    else{
        cout<<"Third no is maximum.";
    }
    return 0;
}