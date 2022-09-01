#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
    int a,b;
    cout<<"Enter the two number";
    cin>>a>>b;
    swap(a,b);
    return 0;
}
void swap(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<a<<" "<<b;
}

