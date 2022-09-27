//wap to take input any no. from user and orint the table of given no....
#include<iostream>
using namespace std;
int main()
{
    int n1,tab,i;
    cout<<"enter any no. you want to table:";
    cin>>n1;
    for(i=1;i<=10;i++)
    cout<<n1<<"*"<<i<<"="<<n1*i<<"\n";
   return 0; 
}