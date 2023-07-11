#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void rotate(int a[], unsigned size, int shift)
{
    shift %= size;
    for (int j = 0; j < shift; j++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            swap(&a[i], &a[i + 1]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << ' ';
    }
    cout << "\n";
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int size = 5;
    int shift = 8;
    rotate(a, size, shift);

    return 0;
}