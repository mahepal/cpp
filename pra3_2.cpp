#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	private:
		int rno;
		static float passingMarks;

	public:
		static void setPassingMarks(const float pmarks)
		{
			passingMarks=pmarks;
		}
		static void showPassingMarks()
		{
			cout<<"\nPassing Marks = "<<Student::passingMarks<<endl;
		}
		const static float getPassingMarks()
		{
			return passingMarks;
		}
};


float Student::passingMarks;

int main()
{
	Student ram,rahim;

	//rahim.setPassingMarks(10);
	//rahim.showPassingMarks();

	ram.setPassingMarks(12);
	ram.showPassingMarks();

	cout<<"getPassingMarks() : "<<rahim.getPassingMarks()<<endl;
	return 0;
}

