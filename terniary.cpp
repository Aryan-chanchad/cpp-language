#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x;
    cout<<"Enter a:";
    cin>>a;

    cout<<"Enter b:";
    cin>>b;

    cout<<"Enter c:";
    cin>>c;
    
    x=a>b ? a>c ? a:c:b>c ? b:c;
    cout<<"Ans"<<x;
    


}