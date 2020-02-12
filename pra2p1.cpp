#include<iostream>
#include<string.h>
using namespace std;

class Person
{
   private:
	char name[10];
	char surname[10];
	int age;
	char gender;
   public:
	void setName(char []);
	void setSurname(char []);
	void setAge(int);
	void setGender(char);
	void showPerson();

};
int main()
{

	Person ram;
	ram.setName("priyanka");
	ram.setSurname("mahepal");
	ram.setAge(21);
	ram.setGender('F');
	ram.showPerson();

    cout<<"----------\n";
	Person rahim;
	rahim.setName("pushkar");
	rahim.setSurname("mahepal");
	rahim.setAge(20);
	rahim.setGender('M');
	rahim.showPerson();
}
void Person::setName(char nm[])
{
	strcpy(name,nm);
}
void Person::setSurname(char snm[])
{
	strcpy(surname,snm);
}
void Person::setAge(int ag)
{
	age = ag;
}
void Person::setGender(char gen)
{
	gender= gen;
}
void Person::showPerson()
{
	cout<<"name is:"<<name<<endl;
	cout<<"surname is:"<<surname<<endl;
	cout<<"age is:"<<age<<endl;
	cout<<"gender is:"<<gender<<endl;
}
