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
        void setname(char []);
        void setsurname(char []);
        void setage(int);
        void setgender(char);
        void setPerson(char [],char [],int,char);
        void printfullname(char [],char []);
        void showPerson();
};
int main()
{
    Person amit;
    amit.setPerson("mahepal","priyanka",21,'F');
    amit.showPerson();
    return 0;
}
void Person::setPerson(char nm[],char snm[],int ag,char gen)
{
    setname(nm);
    setsurname(snm);
    setage(ag);
    setgender(gen);
}
void Person::setname(char nm[])
{
    strcpy(name,nm);
}
void Person::setsurname(char snm[])
{
    strcpy(surname,snm);
}
void Person::setage(int ag)
{
    age=ag;
}
void Person::setgender(char gen)
{
    gender=gen;
}
void Person::printfullname(char nm[],char snm[])
{
    strcpy(name,nm);
    strcpy(surname,snm);
    strcat(name,surname);
}
void Person::showPerson()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Surname: "<<surname<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Fullname:"<<name<<surname<<endl;
}
