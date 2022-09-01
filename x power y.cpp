#include<iostream>
using namespace std;
double power(int ,int);
int main()
{
    int x,y;
    cout<<"Enter the x raised to the power y:";
    cin>>x>>y;
    cout<<x<<" "<<"power"<<" "<<y<<" "<<"is"<<"  = "<<power(x,y);
    return 0;
}
double power(int x,int y)
{
    if(y==0)
        return 1;
      if(y>0)
        return x*power(x,y-1);

    else
        return 1/x*power(x,y+1);
}
