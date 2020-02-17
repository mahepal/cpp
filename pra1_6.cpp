#include <iostream>
using namespace std;
int checkLeapYear(int year);
int main()
{
    int y;
    cout<<"enter leap year: "<<endl;
    cin>>y;
    cout<<"The Year "<<y<<" is "<<(checkLeapYear(y) ? "Leap Year" : "Not Leap Year")<<endl;

}
int checkLeapYear(int year)
{
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                return 1;

            }
            else
            {
                return 0;

            }

        }
        else
        {
            return 1;

        }

    }
    else
    {
        return 0;

    }

}
