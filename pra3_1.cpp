#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	private:
		int rno;
		static char holiday[12];

	public:
		static void setHoliday(char const* day)
		{
			strcpy(holiday,day);
		}

		static void showHoliday()
		{
			cout<<"Holiday is on "<<Student::holiday<<endl;
		}

		static const char* getHoliday()
		{
			return holiday;
		}

};

char Student::holiday[12];


int main()
{
	Student ram,rahim;

	ram.setHoliday("Sunday");
	ram.showHoliday();

	rahim.showHoliday();


	rahim.setHoliday("Saturday");
	rahim.showHoliday();

	cout<<"getHoliday() : "<<rahim.getHoliday();

	return 0;
}

