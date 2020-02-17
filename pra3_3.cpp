#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	private:
		char name[10];
		int monthlySal,basicSal;
		float da,hra;
		static float da_rate;
		static float hra_rate;


	public:
		static void setDa_rate(const float da)
		{
			da_rate=da;
		}
		static void setHra_rate(const float hra)
		{
			hra_rate=hra;
		}
		void set(char* nm,int bs)
		{
			strcpy(name,nm);
			basicSal=bs;
		}
		void calculateMonthlySalary()
		{
			da=(basicSal*da_rate)/100;
			hra=(basicSal*hra_rate)/100;
			monthlySal=da+hra+basicSal;
		}
		void show()
		{
			cout<<"\nname:"<<name<<"\nbasic salary:"<<basicSal<<"\nda_rate:"<<da_rate<<"\nhra_rate:"<<hra_rate<<"\nMonthly Salary:"<<monthlySal<<endl;
		}
};
float Employee::da_rate;
float Employee::hra_rate;

int main()
{
	Employee::setDa_rate(50);
	Employee::setHra_rate(10);

	Employee ram,rahim;

	ram.set("Ram",10000);
	ram.calculateMonthlySalary();
	ram.show();

	rahim.set("Rahim",20000);
	rahim.calculateMonthlySalary();
	rahim.show();

	return 0;
}
