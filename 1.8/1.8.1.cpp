#include <iostream>
using namespace std;

// определите только функцию power, где
//    x - число, которое нужно возвести в степень
//    p - степень, в которую нужно возвести x
//

int power(int x, unsigned p)
{
    int answer = 1;
    int multiply = x;
    /* считаем answer */
    while (p != 0)
    {
        if (p % 2 == 1)
        {
            answer *= multiply;
        }
        multiply *= multiply;
        p = p / 2;
    }
    return answer;
}

int main()
{
    int x = 0, p = 0;
    cout << "Enter x and p\n";
    cin >> x >> p;
    int answer = power(x, p);
    cout << "The answer is: " << answer << "\n";

    return 0;
}