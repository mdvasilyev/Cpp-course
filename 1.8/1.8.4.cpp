#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    double discr = b * b - 4 * a * c;
    if (discr < 0)
        cout << "No real roots\n";
    else if (discr == 0)
        cout << -(double)b / (2 * a) << ' ' << -(double)b / (2 * a) << "\n";
    else
        cout << (-b - sqrt(discr)) / (2 * a) << ' ' << (-b + sqrt(discr)) / (2 * a) << "\n";

    return 0;
}