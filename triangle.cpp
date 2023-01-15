//wap to take three input from user as a side of triangle and check whether the
//given triangle is equilateral,isosceles or scalene.....
#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout<<"Enter the first side:";
    cin>>s1;
    cout<<"Enter the second side:";
    cin>>s2;
    cout<<"Enter the third side:";
    cin>>s3;
    if(s1==s2 && s2==s3)
    {
        cout<<"The triamgle is equilateral";
    }
    else if(s1==s2 && s2!=s3)
    {
        cout<<"The triangle is isosceles";
    }
    else
    {
        cout<<"The triangle is scalene";
    }
    return 0;
}