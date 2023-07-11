#include <iostream>
using namespace std;

bool repeat(char a, char b)
{
    if (isspace(a) && (a == b))
    {
        return true;
    }
    return false;
}

int main()
{
    char c = '\0';
    char prev = '0';
    while (cin.get(c))
    {
        if (not repeat(c, prev))
        {
            cout << c;
        }
        prev = c;
    }

    return 0;
}