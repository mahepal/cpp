#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
   private:
    int empno;
	char empname[10];
	char gender;
	int basic_salary;
	int da;
	int hra;
	int monthly_salary;
	int bonus;
	int grade;
	int yearly_salary;
   public:
	void setEmployee(int eno,char enm[],char gen,int bas_sal);
	void calcDa();
	void calcHra();
	void calcMonthlySalary();
	void calcBonus();
	void calcYearlySalary();
    void show();

};
int main()
{

	Employee krina;
	krina.setEmployee(11,"krina",'F',2000);
	krina.calcDa();
	krina.calcHra();
	krina.calcMonthlySalary();
	krina.calcBonus();
	krina.calcYearlySalary();
	krina.show();

	return 0;
}
void Employee::setEmployee(int eno,char enm[],char gen,int bas_sal)
{
	empno=eno;
	strcpy(empname,enm);
	gender=gen;
	basic_salary=bas_sal;
}
void Employee::calcDa()
{

	da=basic_salary*5/100;
}
void Employee::calcHra()
{
	 hra=basic_salary*2/100;
}
void Employee::calcMonthlySalary()
{
   monthly_salary=basic_salary+da+hra;
}


void Employee::calcBonus()
{
    bonus=2000;
}
void Employee::calcYearlySalary()
    {
        yearly_salary=bonus+(monthly_salary*12);
    }
void Employee::show()
{
	cout<<"Employee number is:"<<empno<<endl;
	cout<<"Employee name is:"<<empname<<endl;
	cout<<"Gender is:"<<gender<<endl;
	cout<<"basic salary is:"<<basic_salary<<endl;
    cout<<"da is:"<<da<<endl;
    cout<<"hra is:"<<hra<<endl;
    cout<<"monthly salary is:"<<monthly_salary<<endl;
    cout<<"bonus:"<<bonus<<endl;
    cout<<"yearly salary is:"<<yearly_salary<<endl;
}

