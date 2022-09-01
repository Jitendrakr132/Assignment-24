#include<iostream>
using namespace std;
void area(int );
void area(int ,int );
int main()
{
    int r,a,b;

      area(r);
      area(a,b);
}
void area(int r)
{
    cout<<"Enter the radius";
    cin>>r;
    cout<<"\n"<<"Area of circle"<<3.14*r*r;
}
void area(int a,int b)
{
    cout<<"\n"<<"Enter the length and breath";
    cin>>a>>b;
    cout<<"\n"<<"Area of rectangle "<< a*b;
}
