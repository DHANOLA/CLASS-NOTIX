#include <iostream>

using namespace std;

class Shape
{

    float side1, side2;

    int ch;

public:
    float calculate(int side)
    {

        return side * side;
    }

    float calculate(int side1, int side2)
    {

        return side1 * side2;
    }

    float calculate(float side1, float side2)
    {

        return .5 * side1 * side2;
    }

    void choice()
    {

        cout << "\n what to find:\n1. area of square\n2. area of rectangle\n3. area of triangle\nenter your choice: ";

        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "\n enter the side of square: ";

            cin >> side1;

            cout << "\n the area of square is: " << calculate(int(side1)) << endl;
            break;
        case 2:
            cout << "\nenter the length and breadth of rectangel: ";

            cin >> side1 >> side2;

            cout << "\n teh area of rectangel is: " << calculate(int(side1), int(side2)) << endl;

            break;
        case 3:

            cout << "\n enetr the base and height of trianngle: ";

            cin >> side1 >> side2;

            cout << "\n the area of triangle is: " << calculate(side1, side2) << endl;

            break;

        default:

            cout << "\n eneter the valid option!!!\n";
            break;
        }
    }
};

int main()
{
    Shape obj;

    obj.choice();

    return 0;
}