#include <iostream>
using namespace std;

void strcat(char *to, const char *from)
{
    char *end = to;
    while (*end)
    {
        end++;
    }
    while (*from)
    {
        *end = *from;
        end++;
        from++;
    }
    *end = '\0';
}

int main()
{
    const int max_len = 100;
    char str1[max_len];
    char str2[max_len];
    cin.getline(str1, max_len);
    cin.getline(str2, max_len);
    strcat(str1, str2);
    cout << str1;

    return 0;
}