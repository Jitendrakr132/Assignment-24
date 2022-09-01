#include<iostream>
using namespace std;
void add(int,int);
void add(int ,float);
int main()
{
    int a,b,l,h;
    add(a,b);
    cout<<"\n";
    add(l,h);
}
void add(int a,int b)
{
    cout<<"Enter the two number:";
    cin>>a>>b;
    cout<<"Sum of "<<a+b;
}
void add (int l,float h)
{
    cout<<"\n"<<"Enter the two deffrent type";
    cin>>l>>h;
    cout<<"Sum is" <<l+h;
}
