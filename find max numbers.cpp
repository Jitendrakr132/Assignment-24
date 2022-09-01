#include<iostream>
using namespace std;
void findmax(int,int ,int);
int main()
{
    int a,b,c;
    cout<<"Enter the number";
    cin>>a>>b>>c;
    findmax(a,b,c);
    return 0;
}
void findmax(int a,int b,int c)
{
    int m;
    if(a<b&&b<c)
        m=c;
    else if(a<b&&b>c)
       m=b;
    else
        m=a;
    printf("find max number is %d",m);

}
