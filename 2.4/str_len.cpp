#include <iostream>
using namespace std;

unsigned strlen(const char *str)
{
    unsigned len = 0;
    char c = *str;
    while (c != '\0')
    {
        len++;
        c = *(++str);
    }
    return len;
}

int main()
{
    unsigned len = strlen("123456789");
    cout << len;
    return 0;
}