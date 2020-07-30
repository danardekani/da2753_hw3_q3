#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, x1, x2, discriminant, realPart, imaginaryPart ;

    cout << "Please enter value for a: ";
    cin >> a;
    cout << "Please enter value for b: ";
    cin >> b;
    cout << "Please enter value for c: ";
    cin >> c;

    discriminant = b * b - 4 * a * c;
    cout << discriminant << endl;

    // If/else statements are needed to figure out the nature of the real root.
    // There are three potential solutions based on whether or not the discriminant is <, ==, or > than 0
    if (discriminant > 0)
    {
        x1 = (- b + sqrt(discriminant)) / (2 * a);
        x2 = (- b - sqrt(discriminant)) / (2 * a);
        cout << "This equation has two real solutions x1 = " << x1 << " and x2 = " << x2 << endl;
    } else if (discriminant == 0)
    {
        x1 = ( - b + sqrt(discriminant)) / (2 * a);
        cout << "This equation has a single real solution x= " << x1 << endl;
    } else
    {
        realPart = - b / (2 * a);

        //the discriminant must be negative to produce an imaginary number
        imaginaryPart = sqrt(- discriminant) / (2 * a);
        cout << "This equation has two complex solutions: ";
        cout << "x1 = " << realPart << " + " << imaginaryPart << " and ";
        cout << "x2 = " << realPart << " - " << imaginaryPart << endl;
    }

    return 0;
}