#include<iostream>
using namespace std;
int main()
{
    char p,a;
    cout<<"Enter character:";
    cin>>p;

    if(p>=65 && p<97)
    {
        a=p+32;
        cout<<"\n"<<a;;
    } else if(p>=97 && p<=122)
    {
        a=p-32;
        cout<<"\n"<<a;
    }

  
}