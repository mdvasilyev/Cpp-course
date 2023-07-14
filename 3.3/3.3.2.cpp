#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    /* Реализуйте этот конструктор */
	String(size_t n, char c){
        char *str = new char[n + 1];
        for (int i = 0; i < n; i++)
        {
            str[i] = c;
        }
        str[n] = '\0';
        this->size = n;
        this->str = str;
    }

    /* и деструктор */
	~String(){
        delete [] str;
    }


	size_t size;
	char *str;
};

int main()
{
    return 0;
}