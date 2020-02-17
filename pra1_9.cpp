#include<iostream>
#include<stdlib.h>
using namespace std;

void show(int*,int n);
void show(int **,int r,int c);
void show(char*);
void show(char**,int r);
int main()
{
    cout<<"Array of Vector"<<endl;
    int *p;
    int n1;
    cout<<"How many records you want to:";
    cin>>n1;
    p = (int*)malloc(sizeof(int)*n1);
    for(int i=0;i<n1;i++)
    {
        cin>>p[i];
    }
    show(p,n1);
    cout<<"Matrix:"<<endl;
    int r,c;
    cout<<"enter rows:"<<endl;
    cin>>r;
    cout<<"enter columns:"<<endl;
    cin>>c;
    int **p1;
    p1 = (int**)malloc(sizeof(int)*r);
    cout<<"enter values:"<<endl;
    for(int i=0;i<r;i++)
    {
        p1[i] = (int*)malloc(sizeof(int)*c);
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            {
                cin>>p1[i][j];
            }
    }
    show(p1,r,c);
    cout<<"String:"<<endl;
    char *p2;
    int ch;
    cout<<"enter how many records you want:";
    cin>>ch;
    p2 = (char*)malloc(sizeof(char)*ch);
    cin>>p2;
    show(p2);
    cout<<"Array of string:"<<endl;
    char **p3;
    int rw,cl;
    cout<<"enter no of string rows:";
    cin>>rw;
    cout<<"enter no of string columns:";
    cin>>cl;
    p3 = (char**)malloc(sizeof(char)*rw);
    for(int i=0;i<rw;i++)
    {
        p3[i] = (char*)malloc(sizeof(char)*c);
        cin>>p3[i];
    }
    show(p3,r);
}
void show(char ** x,int rows)
{
    cout<<"In show():"<<endl;
    for(int i=0;i<rows;i++)
    {
        cout<<x[i]<<endl;
    }
}
void show(char *x)
{
    cout<<"In show():"<<endl;
    for(int i=0;x[i]!='\0';i++)
    {
        cout<<x[i]<<endl;
    }
}
void show(int *x,int y)
{
    cout<<"In show():"<<endl;
    for(int i=0;i<y;i++)
    {
        cout<<"a["<<i<<"]="<<x[i]<<endl;
    }
}
void show(int **x,int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<x[i][j]<<endl;
        }
        cout<<endl;
    }
}
