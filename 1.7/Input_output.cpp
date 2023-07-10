#include <iostream>

int main()
{
    int i = 42;
    double d = 3.14;
    const char *s = "C-style string";
    bool b = true;
    bool b1 = false;

    std::cout << "This is an integer " << i << "\n";
    std::cout << "This is a double " << d << "\n";
    std::cout << "This is a \"" << s << "\"\n";
    std::cout << "This is a true bool " << b << "\n";
    std::cout << "This is false bool " << b1 << "\n";

    std::cout << "Enter an integer and a double:\n";
    std::cin >> i >> d;
    std::cout << "Your input is " << i << ", " << d << "\n";

    char c = '\0';
    while (std::cin.get(c))
    { // на каждой итерации считываем один символ в переменную c
        /* здесь можно пользоваться значением прочитанным в переменную c */
        if (c != 'a')
            std::cout << c; // выводим символ, если он не равен 'a'
    }

    return 0;
}