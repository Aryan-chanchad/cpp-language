#include<iostream>
using namespace std;
int main()
{
    float a,b,t;
    char op;

    cout<<"Enter a:";
    cin>>a;

    cout<<"Enter b:";
    cin>>b;

    cout<<"Enter operator:";
    cin>>op;
    
    switch(op)
    {
        case '+':
        t=a+b;
        cout<<t;
        break;

        case '-':
        t=a-b;
        cout<<t;
        break;

        case '*':
        t=a*b;
        cout<<t;
        break;

        case '/':
        t=a/b;
        cout<<t;
        break;
        
        default:
        cout<<"Enter valid operator";
        break;
    }
}