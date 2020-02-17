 #include <iostream>
using namespace std;
void swap(int&,int&);
void swap(float&,float&);
void swap(double&,double&);
void swap(char&,char&);
void swap(char (&)[20],char (&)[20]);
int main()
{
    int ia,ib;
    cout<<"Enter two number: ";
    cin>>ia>>ib;
    cout<<"Before Swapping ia= "<<ia<<" ib= "<<ib<<endl;
    swap(ia,ib);
    cout<<"After Swapping ia= "<<ia<<" ib= "<<ib<<endl;
    float fa,fb;
    cout<<"Enter two float number: ";
    cin>>fa>>fb;
    cout<<"Before Swapping fa= "<<fa<<" fb= "<<fb<<endl;
    swap(fa,fb);
    cout<<"After Swapping fa= "<<fa<<" fb= "<<fb<<endl;
    double da,db;
    cout<<"Enter two Double number: ";
    cin>>da>>db;
    cout<<"Before Swapping da= "<<da<<" db= "<<db<<endl;
    swap(da,db);
    cout<<"After Swapping da= "<<da<<" db= "<<db<<endl;
    char ca,cb;
    cout<<"Enter two Characters: ";
    cin>>ca>>cb;
    cout<<"Before Swapping ca= "<<ca<<" cb= "<<cb<<endl;
    swap(ca,cb);
    cout<<"After Swapping ca= "<<ca<<" cb= "<<cb<<endl;
    char sa[20],sb[20];
    cout<<"Enter two Strings: ";
    cin>>sa>>sb; cout<<"Before Swapping sa= "<<sa<<" sb= "<<sb<<endl;
    swap(sa,sb); cout<<"After Swapping sa= "<<sa<<" sb= "<<sb<<endl;

}
void swap(int& x,int& y)
{
    int temp=x;
    x=y;
    y=temp;
}
void swap(float& x,float& y)
{
    float temp=x;
    x=y;
    y=temp;

}
void swap(double& x,double& y)
{
    double temp=x;
    x=y;
    y=temp;

}
void swap(char& x,char& y)
{
    char temp=x;
    x=y;
    y=temp;

}
void swap(char (&x)[20],char (&y)[20])
{
    for(int i=0;i<20;i++)
    {
        char temp=x[i];
        x[i]=y[i];
        y[i]=temp;

    }

}
