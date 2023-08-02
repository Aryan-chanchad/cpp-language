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
class base2 : public base1
{
    public:
    void setb()
    {
        for(int i=n;i>=1;i--)
        {
            cout<<"\t"<<i;
            ans=ans*i;
        }
    }
};
class derived :  public base2
{
    public:
    void factorial()
    {
        base2 :: setb();
    cout<<"Ans is"<<ans;
    }
}; 
int main()
{
    derived d;
    d.seta();
    d.factorial();
}