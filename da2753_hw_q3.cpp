#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, x1, x2, discriminant, realPart, ImaginaryPart ;

    cout << "Please enter value for a: ";
    cin >> a;
    cout << "Please enter value for b: ";
    cin >> b;
    cout << "Please enter value for c: ";
    cin >> c;

    discriminant = b * b - 4 * a * c;
    cout << discriminant << endl;

    if (discriminant > 0)
    {
        x1 = (- b + sqrt(discriminant)) / (2 * a);
        x2 = (- b - sqrt(discriminant)) / (2 * a);
        cout << "The discriminant is greater than 0, the roots are real and different." << endl;
        cout << x1 << endl;
        cout << x2 << endl;
    } else if (discriminant == 0)
    {
        x1 = ( - b + sqrt(discriminant)) / (2 * a);
        cout << "The discriminant is equal to 0, the roots are real and equal" << endl;
        cout << "x1 = x2 = " << x1 << endl;
    }
//    else (discriminant < 0)
//    {
//
//    }

    return 0;
}