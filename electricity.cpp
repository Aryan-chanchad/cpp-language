#include<iostream>
using namespace std;
int main()
{
    float a,rupees;
    cout<<"Enter a:";
    cin>>a;

   if(a<=200)
   {
    rupees=((a*60)/100)+50;
    cout<<"Charge:"<<rupees;
   }
   else if(a<=300)
   {
   rupees=((a*80)/100)+50;
    cout<<"Charge:"<<rupees;
   }
   else if(a>300)
   {
    rupees=((a*90)/100)+50;
    cout<<"Charge:"<<rupees;
   }
   if(rupees>300)
   {
   
    cout<<"\n in Total amount:"<<rupees+(rupees*15/100);
   }else
   {
    cout<<"Total amount:"<<rupees;
   }

   
}