#include<iostream>
using namespace std;
void prime(int);
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    prime(n);
    return 0;
}
void prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
         break;
    }
if(i==n)
    cout<<"prime number";

    else
        cout<<"not prime number";
}
