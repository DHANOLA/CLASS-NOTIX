#include <iostream>
using namespace std;

class Temperature
{

public:
    float tempC;

    Temperature(float tc)
    {
        tempC = tc;
    }

    virtual void calculate() = 0;
};

class Fahrenheit : public Temperature
{

    float tempF;

public:
    void calculate()
    {
        tempF = (tempC * 1.8) + 32;
        cout << "Temperature in Fahrenheit is " << tempF << "°F" << endl;
    }

    Fahrenheit(float tc) : Temperature(tc) {}
};

class Kelvin : public Temperature
{

    float tempK;

public:
    void calculate()
    {
        tempK = tempC + 273.15;
        cout << "Temperature in Kelvin is " << tempK << "k" << endl;
    }

    Kelvin(float tc) : Temperature(tc) {}
};

int main()
{

    Temperature *kt = new Kelvin(45);
    kt->calculate();

    Temperature *ft = new Fahrenheit(45);
    ft->calculate();

    return 0;
}
