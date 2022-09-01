#include<iostream>
using namespace std;
void fab(int );
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    fab(n);
    return 0;
}
void fab(int n)
{
    int a=-1,b=1,i,c;
    for(a=-1,b=1;i<=n;i++)
    {
        c=a+b;
         a=b;
         b=c;
    }
    if(c==n)
        cout<<"fabonacci number";
    else
       cout<<"Not fabonci number";
}
