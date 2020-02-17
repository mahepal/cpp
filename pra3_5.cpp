#include<iostream>
using namespace std;
class two;
class one
{
    private:
        int data1;
    public:
        void setdata(int init)
        {
            data1=init;
        }
        friend int add_both(one a,two b);
};
class two
{
    private:
        int data2;
    public:
        void setdata(int init)
        {
            data2=init;
        }
        friend int add_both(one a,two b);
};

int add_both(one a,two b)
{
    return a.data1+b.data2;
}

int main()
{
    one a;
    two b;
    a.setdata(5);
    b.setdata(10);
    cout <<"sum of one and two:" << add_both(a, b);
}
