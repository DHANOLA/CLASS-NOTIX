#include <iostream>
#include <cmath>
using namespace std;

class SquareRootError
{

    const float val;

public:
    SquareRootError(float val) : val{val} {}

    const string what() const
    {
        return ("Cannot Calculate Square root for " + to_string(val));
    }
};

double get_sqrt(float x)
{
    if (x < 0)
        throw SquareRootError(x);
    else
        return sqrt(x);
}

int main()
{

    float a{}, b{}, c{};
    float discriminant{}, realPart{}, d{};
    float x1{}, x2{};

    printf("For Equation of type ax(^2) + bx + c = 0\n");

    printf("Enter a:");
    cin >> a;

    printf("Enter b:");
    cin >> b;

    printf("Enter c:");
    cin >> c;

    try
    {

        discriminant = b * b - 4 * a * c;
        d = get_sqrt(discriminant);

        x1 = (-b + d) / (2 * a);
        x2 = (-b - d) / (2 * a);

        printf("x1= %.5f\n", x1);
        printf("x1= %.5f\n", x2);
    }
    catch (const SquareRootError &e)
    {
        cout << "Exception Occured!\n"
             << e.what() << endl;
    }
    catch (...)
    {
        printf("Unexpected Exception Occured!\n");
    }

    return 0;
}