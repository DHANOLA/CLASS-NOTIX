#include <iostream>

using namespace std;

class Student
{

protected:
    char name[30], gender;

    int rollno, n;

public:
    void student_details()
    {

        cout << "\nenter name: ";

        cin >> name;

        cout << "\nenter gender: ";

        cin >> gender;

        cout << "\nenter roll no: ";

        cin >> rollno;

        cout << "\nenter the number of subjects: ";

        cin >> n;
    }

    void display_student_details()
    {

        cout << "\nName: " << name;

        cout << "\nRoll no: " << rollno;

        cout << "\nGender: " << gender;
    }
};

class Internal_exam : public Student
{

protected:
    float intern, total_i = 0;

public:
    void intern_get_marks()
    {

        cout << "\nenter the internal marks: ";

        for (int i = 0; i < n; i++)
        {

            cin >> intern;

            total_i += intern;
        }
    }
    void intern_display()
    {

        cout << "\ntotal internal marks: ";

        cout << "\ntotal: " << total_i;
    }
};

class External_exam : public Internal_exam
{

protected:
    float extrn, total_e = 0;

public:
    void extrn_get_marks()
    {

        cout << "\nenter the external marks: ";

        for (int i = 0; i < n; i++)
        {

            cin >> extrn;

            total_e += extrn;
        }
    }

    void extrn_display()
    {

        cout << "\ntotal external marks: ";

        cout << "\ntotal: " << total_e;
    }
};

class Result : public External_exam
{

    float result = 0;

public:
    void calculate()
    {

        result = (.4 * total_i) + (.6 * total_e);
    }

    void display()
    {

        cout << "\nthe result is: " << result << endl;
    }
};

int main()
{

    int nos;

    cout << "\n enter tne numbner of students: ";

    cin >> nos;

    Result obj[nos];

    for (int i = 0; i < nos; i++)
    {

        cout << "\nenter the personal details for student " << i + 1 << ": ";

        obj[i].student_details();

        cout << "\n enter the marks:\n";

        obj[i].intern_get_marks();

        obj[i].extrn_get_marks();

        cout << "\n entered details: ";

        obj[i].display_student_details();

        cout << "\n the marks entered is: ";

        obj[i].intern_display();

        obj[i].extrn_display();

        cout << "\nthe result:";

        obj[i].calculate();

        obj[i].display();
    }

    return 0;
}
