#include <iostream>

using namespace std;

class Oxygen
{
protected:
    float ovalue = 0;

public:
    Oxygen()
    {

        cout << "\nenter the oxygen molecular value: ";

        cin >> ovalue;
    }
};

class Hydrogen : public Oxygen
{
protected:
    float hvalue = 0;

public:
    Hydrogen()
    {

        cout << "\nenter the hydrogen molecular value: ";

        cin >> hvalue;
    }

    friend class chemical_compound;
};

class Sulphur : public Hydrogen
{
protected:
    float svalue = 0;

public:
    Sulphur()
    {

        cout << "\nenter the sulphur molecular value: ";

        cin >> svalue;
    }

    friend void compute(Sulphur obj);
};

void compute(Sulphur obj)
{

    float h2so4 = 98.0, sulphurous = 82.0, thio = 114.0, total = 0;

    total = obj.ovalue + obj.hvalue + obj.svalue;

    if (total == h2so4)
    {
        cout << "\nthe compound is h2so4\n";
    }

    else if (total == sulphurous)
    {

        cout << "\n the compound is sulphurous acid\n";
    }
    else if (total == thio)
    {

        cout << "\nthe compound is thiosulphuric acid\n";
    }

    else
    {

        cout << "\n there is no compound with that molecular value\n ";
    }
}

int main()
{

    Sulphur s1;

    compute(s1);

    return 0;
}