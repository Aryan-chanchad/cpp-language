#include<iostream>
using namespace std;
class shape
{
    public:
    shape()
    {
        int l=5;
        cout<<"Area of square:"<<l*l<<endl;
    }
    shape(float r)
    {
        cout<<"Area of circle:"<<3.14*r*r<<endl;
    }
    shape(int a,int b)
    {
        cout<<"Area of rectangle:"<<a*b<<endl;
    }
    shape(double b,double h)
    {
        cout<<"Area of triangle:"<<0.5*b*h<<endl;
    }
};
int main()
{
    shape a,b(5),c(5,5),d(2.0,2.0);
}