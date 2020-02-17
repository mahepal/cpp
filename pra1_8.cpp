#include <iostream>
using namespace std;
void show(int*,int n);
int main()
{
   cout<<"Array or Vector: "<<endl;
   int *p;
   int n1;
   cout<<"How many records you want to enter: ";
   cin>>n1;
   p=(int*)malloc(sizeof(int)*n1);
    for(int i=0;i<n1;i++)
    {
        cin>>p[i];

    }
    show(p,n1);
    cout<<"Matrix: "<<endl;
    int rows,cols;
    cout<<"enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>cols;
    int **p1; p1= (int**) malloc(sizeof(int*) * rows);
    cout<<"Enter matrix values: "<<endl;
    for(int i=0;i<rows;i++)
    {
        p1[i]=(int*) malloc(sizeof(int) * cols);

    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>p1[i][j];

        }

    }
    show(p1,rows,cols);
cout<<"String: "<<endl;
char* p2; int ch;
cout<<"how many char you want enter: ";
cin>>ch; p2 = (char*) malloc(sizeof(char) * ch);
cin>>p2;
show(p2);
cout<<"Array of String: "<<endl;
char** p3;
int r,c;
cout<<"enter number of string rows: ";
cin>>r;
cout<<"enter length of string";
cin>>c;
p3 = (char**) malloc(sizeof(char*) * r);
for(int i=0;i<r;i++)
{
    p3[i]=(char*) malloc(sizeof(char) * c);
    cin>>p3[i];

}
show(p3,r);
}
void show(char** x,int rows)
{
    cout<<"In show(): "<<endl;
    for(int i=0;i<rows;i++)
    cout<<x[i]<<endl;

}
void show(char* x)
{
    cout<<"In show(): "<<endl;
    for(int i=0;x[i]!='\0';i++)
    cout<<x[i];
    cout<<endl;

}
void show(int* x,int y)
{
    cout<<"In show(): "<<endl;
    for(int i=0;i<y;i++)
    {
        cout<<"a["<<i<<"]="<<x[i]<<endl;

    }

}
void show(int** x,int rows,int cols)
{
    cout<<"In show(): "<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<x[i][j]<<" ";

        }
        cout<<endl;
}
}
