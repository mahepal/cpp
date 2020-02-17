#include <iostream>
using namespace std;
int maxnumber(int&,int&);
int minnumber(int&,int&);
void touppercase(char (&rs1)[20]);
void tolowercase(char (&rs2)[20]);
void toreversecase(char (&rs3)[20]);
int& maxnumber1(int&,int&);
int& minnumber1(int&,int&);
char& touppercase1(char (&rs1)[20]);
char& tolowercase1(char (&rs2)[20]);
char& toreversecase1(char (&rs3)[20]);
int main()
{
    int a,b;
    char s1[20],s2[20],s3[20];
    cout<<"enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"Maximum Number using pass by reference is: "<<maxnumber(a,b)<<endl;
    cout<<"Maximum Number using return by reference is: "<<maxnumber1(a,b)<<endl;
    cout<<"Minimum Number using pass by reference is: "<<minnumber(a,b)<<endl;
    cout<<"Minimum Number using return by reference is: "<<minnumber1(a,b)<<endl;
    cout<<"enter a small char string: "<<endl; cin>>s1; touppercase(s1);
    cout<<"Uppercase of string using pass by reference is: "<<s1<<endl;
    s1[20]=touppercase1(s1);
    cout<<"Uppercase of string using return by reference is: "<<s1<<endl;
    cout<<"enter a capital char string: "<<endl; cin>>s2;
    tolowercase(s2);
    cout<<"Lowercase of string using pass by reference is: "<<s2<<endl;
    s2[20]=tolowercase1(s2);
    cout<<"Lowercase of string using return by reference is: "<<s2<<endl;
    cout<<"enter a string: "<<endl; cin>>s3;
    toreversecase(s3);
    cout<<"reverse of string using pass by reference is: "<<s3<<endl;
    s3[20]=toreversecase1(s3);
    cout<<"reverse of string using return by reference is: "<<s3<<endl;
}
int maxnumber(int& x,int& y)
{
    if(x>y)
        return x;
    else
        return y;
}
int& maxnumber1(int& x,int& y)
{
    if(x>y)
        return x;
    else
        return y;
}
int minnumber(int& x,int& y)
{
    if(x<y)
        return x;
    else
        return y;
}
int& minnumber1(int& x,int& y)
{
    if(x<y)
        return x;
    else
        return y;
}
void touppercase(char (&rs1)[20])
{
    for(int i=0;rs1[i]!='\0';i++)
        {
            if(rs1[i]>=97 && rs1[i]<=122)
            rs1[i]=rs1[i]-32;
        }
}
char& touppercase1(char (&rs1)[20])
{
    for(int i=0;rs1[i]!='\0';i++)
        {
            if(rs1[i]>=97 && rs1[i]<=122)
            rs1[i]=rs1[i]-32;
        }
    return rs1[20];
}
void tolowercase(char (&rs2)[20])
{
    for(int i=0;rs2[i]!='\0';i++)
        {
            if(rs2[i]>=65 && rs2[i]<97)
            rs2[i]=rs2[i]+32;
        }
}
char& tolowercase1(char (&rs2)[20])
{
    for(int i=0;rs2[i]!='\0';i++)
        {
            if(rs2[i]>=65 && rs2[i]<97)
            rs2[i]=rs2[i]+32;
        }
        return rs2[20];
}
void toreversecase(char (&rs3)[20])
{
    int i=0,j=0;
    for(j=0;rs3[j]!='\0';j++);
    char temp[20];
    temp[j--]='\0';
    for(i=0;rs3[i]!='\0';i++)
    temp[j--]=rs3[i];
    for(int k=0;k<i;k++)
    rs3[k]=temp[k];
//    rs3[k]=temp[k];
}
char& toreversecase1(char (&rs3)[20])
{
    int i=0,j=0;
    for(j=0;rs3[j]!='\0';j++);
    char temp[20];
    temp[j--]='\0';
    for(i=0;rs3[i]!='\0';i++)
    temp[j--]=rs3[i];
    for(int k=0;k<i;k++)
    rs3[k]=temp[k];
    return rs3[20];
}
