#include<iostream>
using namespace std;
class base
{
    public:
    int n,ans=1;
    void factorial()
    {
        cout<<"Enter a number:"<<endl;
        cin>>n;
    }
};
class derived : public base
{
    public:
    void display()
    {
        for(int i=n;i>=1;i--)
        {
            cout<<"\t"<<i<<endl;
            ans=ans*i;
        }
        cout<<"Ans is"<<ans;
    }
};
int main()
{
    derived d;
    d.factorial();
    d.display();

}