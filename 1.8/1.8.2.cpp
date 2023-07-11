#include <iostream>
using namespace std;

#define MAX(x, y, r)       \
    {                      \
        int new_x = x;     \
        int new_y = y;     \
        r = new_x >= new_y \
                ? new_x    \
                : new_y;   \
    } /* присваивает r максимум из x и y */

int max_val(int x, int y, int r)
{
    if (x >= y)
    {
        r = x;
    }
    else
    {
        r = y;
    }
    return r;
}

int main()
{
    int a = 10;
    int b = 20;
    int c = 0;
    // c = max_val(a, b, c);
    MAX(a, b, c); // теперь c равно 20
    cout << "Now c is " << c << "\n";
    MAX(a += b, b, c); // теперь a = с = 30
    cout << "Now c is " << c << "\n";
    return 0;
}