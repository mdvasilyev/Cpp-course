#include <iostream>
using namespace std;

unsigned gcd(unsigned a, unsigned b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    else if (a >= b)
    {
        return gcd(a % b, b);
    }
    else
    {
        return gcd(a, b % a);
    }
}

int main()
{
    unsigned a = 0;
    unsigned b = 0;
    cin >> a >> b;

    int result = gcd(a, b);
    cout << result << "\n";

    return 0;
}