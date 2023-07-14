#include<iostream>
using namespace std;
int main()
{
    float i,t;
    cout<<"Enter income:";
    cin>>i;

   if(i <= 2500)
   {
    t = 0;
    
    cout<<"Tax:\n"<<t;
   }
   else if(i >= 2500 && i <= 5000)
   {
   t=(i-2500)*0.10;
    cout<<"Tax:"<<t;
   }
   else if(i>=5000 && i<=10000)
   {
    t=250+(i-5000)*0.20;
    cout<<"Tax:"<<t;
   }else
   if(i>=10000)
   {
    t=250+1000+(i-10000)*0.30;
    cout<<"\n Tax:"<<t;
   }

   
}