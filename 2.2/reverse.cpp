#include <iostream>
using namespace std;

void detect_zero()
{
    int number = 0;
    cin >> number;
    if (number == 0)
    {
        return;
    }
    else
    {
        detect_zero();
    }
    cout << number << ' ';
}

int main()
{
    detect_zero();

    return 0;
}