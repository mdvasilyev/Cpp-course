#include <iostream>
using namespace std;

#define MAX(x, y, r) /* присваивает r максимум из x и y */

int main()
{
    int a = 10;
    int b = 20;
    int c = 0;
    MAX(a, b, c);      // теперь c равно 20
    MAX(a += b, b, c); // теперь a = с = 30
    return 0;
}