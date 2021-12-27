#include <iostream>

using namespace std;

class Access;

class Student
{

    int sapid;

    char name[50];

    float marks[5];

public:
    Student()
    {

        cout << "\n enter the sapid,name resp.: ";

        cin >> sapid;

        cin >> name;

        cout << "\n enter the marks in 6 subjects resp.: ";

        for (int i = 0; i < 6; i++)
        {

            cin >> marks[i];
        }
    }
    friend class Access;
};

class Access
{
    float total = 0;

public:
    void show(Student &obj)
    {

        cout << "\n the details eneterd is: \nSAPID= " << obj.sapid << "\n Name= " << obj.name << endl;
    }

    void compute(Student &obj)
    {

        for (int i = 0; i <= 5; i++)
        {

            total += obj.marks[i];
        }

        cout << "\n teh total marks is: " << total << "\nthe average marks is: " << total / 6 << endl;
    }
};

int main()
{

    Student s;

    Access a;

    a.compute(s);

    return 0;
}