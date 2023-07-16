// Этот код просто напоминание как выглядит класс Foo и функция foo_says.
// Не нужно его расскоментировать и/или менять.

#include <iostream>

struct Foo
{
    void say() const { std::cout << "Foo says: " << msg << "\n"; }

protected:
    Foo(const char *msg) : msg(msg) {}

private:
    const char *msg;
};

void foo_says(const Foo &foo) { foo.say(); }

Foo get_foo(const char *msg)
{
    struct Foo_heir : Foo
    {
    public:
        Foo_heir(const char *msg) : Foo(msg) {}
    };
    // Объявляем объект наследник, у которого в качестве аргумента msg и его возвращаем.
    Foo_heir heir = Foo_heir(msg);
    return heir;
}

int main()
{
    // Вам нужно определить функцию get_foo, как описано в задании,
    // чтобы компилировался и работал как ожидается следующий код:

    foo_says(get_foo("Hello!"));
}