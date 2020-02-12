#include<iostream>
using namespace std;

class Date
{
    public:

    int dd,mm,yyyy;
    void setDD(int d);
    void setMM(int m);
    void setYYYY(int y);
    void set(int d,int m,int y);
    int getDD();
    int getMM();
    int getYYYY();
    void printShortDate();
    void printLongDate();
    int checkLeapYear();
    int isValidDate();
};
void Date::setDD(int d)
{
    cout<<"date is= "<<d<<endl;
}
void Date::setMM(int m)
{
     cout<<"month is= "<<m<<endl;

}
void Date::setYYYY(int y)
{
      cout<<"year is= "<<y<<endl;

}
void Date::set(int d,int m,int y)
{
      cout<<" date is="  <<d<<"month is="  <<m<<"year is="  <<y<<endl;

}
int Date::getDD()
{
    cout<<"enter the date"<<endl;
    cin>>dd;
}
int Date::getMM()
{
    cout<<"enter the month"<<endl;
    cin>>mm;
}
int Date::getYYYY()
{
    cout<<"enter the year"<<endl;
    cin>>yyyy;
}
void Date::printShortDate()
{

    cout<<"print short date"<<endl;
    cout<<yyyy<<"-"<<mm<<"-"<<dd<<endl;
}
void Date::printLongDate()
{

      cout<<"print long date"<<endl;
      cout<<dd<<"-"<<mm<<"-"<<yyyy<<endl;
}
int Date::checkLeapYear()
{
    if(yyyy%4==0)
    {
        if(yyyy%100==0)
        {
            if(yyyy%400==0)

            {
                return 1;
            }
            else{
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
int Date::isValidDate()
{
    if(yyyy>0)
    {
        if(mm==1||mm==3||mm==5||mm==7||mm==9||mm==11)
        {
            if(dd>=1 && dd<=31)
            {
               return 1;
            }
        }
        else if(mm==4 ||mm==6 ||mm==8||mm==10||mm==12)
        {
            if(dd>=1 && dd<=30)
            {
               return 1;
            }
            else
            {
                return 0;
            }
        }
        else if(mm==2)
        {
             if(yyyy%4==0)
             {
                if(yyyy%100==0)
                {
                    if(yyyy%400==0)
                    {
                        if(dd>=1 && dd<=29)
                        {

                            return 1;
                        }
                    }
                    else{
                        if(dd>=1 && dd<=28)
                        {

                            return 1;
                        }
                    }
                }
                else{
                        if(dd>=1 && dd<=29)
                        {

                                return 1;
                        }
                }


            }
            else
            {

                return 0;
            }
        }
        else
        {
             return 0;
        }

    }
    else{
        return 0;
    }
}
int main()
{
    Date d1;
    int temp,temp1;


    d1.getDD();
    d1.getMM();
    d1.getYYYY();


    d1.setDD(d1.dd);
    d1.setMM(d1.mm);
    d1.setYYYY(d1.yyyy);
    d1.set(d1.dd,d1.mm,d1.yyyy);

    d1.printLongDate();
    d1.printShortDate();

   temp= d1.checkLeapYear();
   if(temp==1)
   {
       cout<<"leap year"<<endl;

   }
   else
   {
       cout<<"not leap year"<<endl;
   }
   temp1= d1.isValidDate();

   if(temp1==1)
   {
       cout<<"valid date"<<endl;

   }
    else{
          cout<<"invalid date"<<endl;
    }
}
