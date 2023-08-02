#include<iostream>
using namespace std;
class base1
{
    public:
    int n,ans=1;
    void seta()
    {
        cout<<"Enter n:";
        cin>>n;
    }
};
class base2
{
    public:
    int i;
};
class derived : public base1, public base2
{
    public:
    void factorial()
    {
        for( i=n;i>=1;i--)
        {
            cout<<"\t"<<i;
            ans=ans*i;
        }
    cout<<"Ans is"<<ans;
    }
}; 
int main()
{
    derived d;
    d.seta();
    d.factorial();
}