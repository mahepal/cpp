#include<iostream>
using namespace std;

class boy;
class girl
{
    int income;
    public:
        int girlfunc(boy b1);
        void setdata(int in)
        {
            income=in;
        }
        void show()
        {
            cout<<"girl income:"<<income;
        }
};
class boy
{
    private:
        int income1;
        int income2;
    public:
        void setdata(int in1,int in2)
        {
            income1=in1;
            income2=in2;
        }
        friend int girl::girlfunc(boy b1);
};
int girl::girlfunc(boy b1)
{
    return b1.income1+b1.income2;
}
int main()
{
    boy b1;
    girl g1;
    b1.setdata(500,1000);
    g1.setdata(300);
     cout<<"boy b1 total income"<<g1.girlfunc(b1)<<endl;
    g1.show();
}
