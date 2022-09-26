
#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int bin,dec=0;
    cout<<"Enter the binary number:";
    cin>>bin;
    int i=0;
    while(bin>0)
    {
        dec=dec+(bin%10)*pow(2,i);
        bin=bin/10;
        i++;
    }
    cout<<"\nThe value of decimal no ="<<dec;
    return 0;
}