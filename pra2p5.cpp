#include<iostream>
#include<string.h>
using namespace std;
const int N=2;
class Employee
{
    public:
    int empno;
    char empname[15];
    char gender;
    int basic_salary,da,hra,monthly_salary,bouns,yearly_salary;

    void setEmployee(int eno, char enm[],char gen,int bas_sal)
    {
        empno=eno;
        strcpy(empname,enm);
        gender=gen;
        basic_salary=bas_sal;
    }
    void calcDa()
    {
        da=basic_salary*5/100;
    }
    void calcHra()
    {
        hra=basic_salary*2/100;
    }
    void calcMonthlySalary()
    {
        monthly_salary=basic_salary+da+hra;
    }
    void calcBonus()
    {
        cout<<"Enter bonus=";
        cin>>bouns;

    }
    void calcYearlySalary()
    {
        yearly_salary=bouns+(monthly_salary*12);
    }
    void show()
    {
        cout<<empno<<'\t';
        cout<<empname<<'\t';
        cout<<gender<<'\t';
        cout<<basic_salary<<'\t';
        cout<<monthly_salary<<'\t';
        cout<<yearly_salary<<  '\t';
    }
};

int main()
{
    Employee emp_arr[N];
    for(int i=0;i<N;i++)
    {
        cout<<"Enter empno=";
        cin>>emp_arr[i].empno;

        cout<<"Enter emp name=";
        cin>>emp_arr[i].empname;

        cout<<"Enter gender=";
        cin>>emp_arr[i].gender;

        cout<<"Enter basic salary=";
        cin>>emp_arr[i].basic_salary;

        emp_arr[i].setEmployee(emp_arr[i].empno,emp_arr[i].empname,emp_arr[i].gender,emp_arr[i].basic_salary);
        emp_arr[i].calcBonus();
    }

    for(int i=0;i<N;i++)
    {
        emp_arr[i].calcDa();
        emp_arr[i].calcHra();
        emp_arr[i].calcMonthlySalary();
        emp_arr[i].calcYearlySalary();
    }

    cout<<endl<<"-------------------------------------------- ";
    cout<<endl<<"-------------- EMPLOYEE -DATABASE ------------- ";
    cout<<"\nEnum\tEname\tGender\tBas_sal\tMont_sal    Year_sal\n";
    for(int i=0;i<N;i++)
    {
        emp_arr[i].show();
        cout<<endl;
    }

}
