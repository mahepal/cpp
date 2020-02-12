#include<iostream>
#include<string.h>
using namespace std;

class Student
{
   private:
    int rollno;
	char name[10];
	int semester;
	float c_marks;
	float cpp_marks;
	float java_marks;
	float total_marks;
	float percentage;
	float grade;
   public:
	void setStudent(int rno,char nm[],int sem,float cm,float cppm,float jm);
	void calculateTotalMarks();
	void calculatePercentage();
	void calculateGrade();
	void showStudent();

};
int main()
{
	Student hardil;
	hardil.setStudent(11,"priyanka",2,60,69,55);
	hardil.calculateTotalMarks();
	hardil.calculatePercentage();
	hardil.showStudent();
	hardil.calculateGrade();
	cout<<"\n-------------\n";
	Student mira;
	mira.setStudent(11,"mansi",2,60,69,89);
	mira.calculateTotalMarks();
	mira.calculatePercentage();
	mira.showStudent();
	mira.calculateGrade();

	return 0;
}
void Student::setStudent(int rno,char nm[],int sem,float cm,float cppm,float jm)
{
	rollno=rno;
	strcpy(name,nm);
	semester=sem;
	c_marks=cm;
	cpp_marks=cppm;
	java_marks=jm;
}
void Student::calculateTotalMarks()
{
	total_marks=c_marks+cpp_marks+java_marks;
}
void Student::calculatePercentage()
{
	percentage=total_marks/3;
}
void Student::calculateGrade()
{
	if(percentage>=70)
        cout<<"grade A";
    else if(percentage>=60)
        cout<<"grade B";
    else if(percentage>=50)
        cout<<"grade C";
    else if(percentage>=40)
        cout<<"pass";
    else
        cout<<"fail";
}

void Student::showStudent()
{
	cout<<"rollno is:"<<rollno<<endl;
	cout<<"name is:"<<name<<endl;
	cout<<"semester is:"<<semester<<endl;
	cout<<"c marks:"<<c_marks<<endl;
    cout<<"cpp marks:"<<cpp_marks<<endl;
    cout<<"java marks:"<<java_marks<<endl;
    cout<<"total marks:"<<total_marks<<endl;
    cout<<"percentage is:"<<percentage<<endl;
}

