#include<iostream>
using namespace std;
void max(int ,int );
void max(int ,float);
int main()
{
    int a,b,x,y;
    max(a,b);
    max(x,y);
}
void max(int a,int b)
{
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    if(a>b)
        cout<<"max is="<<a;
    else
        cout<<"max is="<<b;
}
void max(int x,float y)
{
    cout<<"\n"<<"Enter the two numbers:";
    cin>>x>>y;
    if(x>y)
        cout<<"\n"<<"max is= "<<x;
    else
        cout<<"\n"<<"max is ="<<y;
}
