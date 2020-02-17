#include<iostream>
using namespace std;
class vector
{
	private:
		int *p;
		int size;
	public:
		void setvector(int sz)
		{
			size=sz;
			p=new int[size];
			for(int i=0;i<size;i++)
				cin>>p[i];
		}
		void show()
		{
			for(int i=0;i<size;i++)
			{
				cout<<"arr["<<i<<"]"<<p[i]<<endl;
			}
		}
		friend int countoddnumber(vector);
};
int countoddnumber(vector v)
{
    int c=0;
    for(int i=0;i<v.size;i++)
    {
        if(v.p[i]%2==1)
            c++;
    }
    return c;
}
int main()
{
	int size;
	cout<<"enter the size:";
	cin>>size;
	vector v1;
	v1.setvector(size);
	v1.show();
	cout<<"odd number is : "<<countoddnumber(v1);
}
