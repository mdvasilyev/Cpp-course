#include <cstring>
using namespace std;

char *resize(const char *str, unsigned size, unsigned new_size);

int main()
{
    char test[100] = "Zhopa";
    unsigned size = 100;
    unsigned new_size = 50;
    char *new_test = resize((&test)[100], size, new_size);
    return 0;
}

char *resize(const char *str, unsigned size, unsigned new_size)
{
    const char *copy = str;
    char *new_str = new char[new_size];
    for (int i = 0; i < new_size; i++)
    {
        new_str[i] = copy[i];
    }
    delete[] str;
    return new_str;
}
