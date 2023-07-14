#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    /* Реализуйте этот конструктор */
	String(const char *str = ""){
        int length = strlen(str);
        this->size = length;
        char *copy = new char[length + 1];
        strcpy(copy, str);
        this->str = copy;
    }

	size_t size;
	char *str;
};

int main()
{
    return 0;
}