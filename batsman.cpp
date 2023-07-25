#include<iostream>
using namespace std;
class batsman
{
    int bcode;
    char bname[20];
    int innings,notout,runs;
    float batavg;
    float calcavg()
    {
            return runs/(innings-notout);
    } 
    public:
    void readdata()
    {
        cout<<"Enter code:";
        cin>>bcode;
        cout<<"Enter name:";
        cin>>bname;
        cout<<"Enter innings:";
        cin>>innings;
        cout<<"Enter notouts:";
        cin>>notout;
        cout<<"Enter runs:";
        cin>>runs;
        batavg=calcavg();
    }
    void display()
    {
        cout<<"code:"<<bcode<<endl;
        cout<<"name:"<<bname<<endl;
        cout<<"innings:"<<innings<<endl;
        cout<<"notouts:"<<notout<<endl;
        cout<<"Runs:"<<runs<<endl;
        cout<<"Average of batsman:"<<batavg<<endl;
    }
};
int main()
{
    batsman s;
    s.readdata();
    s.display();
}