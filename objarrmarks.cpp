#include<iostream>
using namespace std;
class marksheet
{
    int p,c,m;
    public:
    void setdata()
    {
        cout<<"Enter p:";
        cin>>p;
        cout<<"Enter c:";
        cin>>c;
        cout<<"Enter m:";
        cin>>m;
    }
    void getdata()
    {
        cout<<"\nTotal marks is:"<<p+c+m;
    }
};
int main()
{
    marksheet a[3];
    for (int i=0; i<3;i++)
    {
        cout<<"Enter marks of student:"<<i<<endl;
        a[i].setdata();
    }
    for (int i=0; i<3;i++)
    {
        a[i].getdata();
    }
}