#include<iostream>
using namespace std;
int main()
{
    int p,c,m;
    cout<<"Enter p:";
    cin>>p;

    cout<<"Enter c:";
    cin>>c;

    cout<<"Enter m:";
    cin>>m;
    
    cout<<"Total mark:"<<(p+c+m);
    cout<<"\npercentage:"<<(p+c+m)*100/300;

    return 0;
}