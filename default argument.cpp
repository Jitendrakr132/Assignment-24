#include<iostream>
using namespace std;
int add(int,int=0);
int main()
{
    int a,b;
    cout<<"Enter the two numbers";
    cin>>a>>b;
    cout<<"sum is="<<add(a,b);
    return 0;
}
int add(int a,int b)
{
    return (a+b);
}
