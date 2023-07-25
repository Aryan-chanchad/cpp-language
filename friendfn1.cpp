#include<iostream>
using namespace std;
class minmax
{
    public:
    int a,b;
    void setdata()
    {
        cout<<"Enter value of a:";
        cin>>a;
        cout<<"Enter value of b:";
        cin>>b;
    }
    friend minmax value(minmax);

};
minmax value(minmax m)
{
    if(m.a>m.b)
    {
        cout<<"Biggest is:"<<m.a;
    }
    else
    {
        cout<<"Biggest is:"<<m.b;
    }
}
int main()
{
    minmax m;
    m.setdata();
    value(m);
    return 0;
}
