#include <iostream>
using namespace std;

int strstr(const char *text, const char *pattern)
{
    int pos = 0;
    const char *beg = pattern;
    const char *cur = text;
    if (not *beg)
    {
        return pos;
    }
    while (*cur)
    {
        if (not *beg)
        {
            return pos;
        }
        else if (*cur == *beg)
        {
            cur++;
            beg++;
        }
        else
        {
            cur++;
            pos++;
            beg = pattern;
        }
    }
    return -1;
}

int main()
{
    const int max_len = 100;
    char text[max_len];
    char pattern[max_len];
    cout << "Type text:\n";
    cin.getline(text, max_len);
    cout << "Type pattern:\n";
    cin.getline(pattern, max_len);

    int pos = -1;
    pos = strstr(text, pattern);
    cout << "Start position: " << pos << "\n";

    return 0;
}