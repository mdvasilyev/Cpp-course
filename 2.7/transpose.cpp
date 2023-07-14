#include <cstdint>
#include <iostream>
using namespace std;

int **create_array2d(size_t a, size_t b);
void free_array2d(int **m, size_t a, size_t b);
int **transpose(const int *const *m, unsigned rows, unsigned cols);

int main()
{
    int rows = 2;
    int cols = 2;
    int **arr = new int *[rows];
    for (int i = 0; i < rows; ++i)
    {
        arr[i] = new int[cols]{};
        for (int j = 0; j < cols; ++j)
        {
            arr[i][j] = j;
        }
    }
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    int **transposed = transpose(arr, rows, cols);
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            cout << transposed[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}

int **create_array2d(size_t a, size_t b)
{
    int **m = new int *[a];
    m[0] = new int[a * b];
    for (size_t i = 1; i != a; ++i)
    {
        m[i] = m[i - 1] + b;
    }
    return m;
}

void free_array2d(int **m, size_t a, size_t b)
{
    delete[] m[0];
    delete[] m;
}

int **transpose(const int *const *m, unsigned rows, unsigned cols)
{
    int **transposed = new int *[cols];
    for (int i = 0; i < cols; i++)
    {
        transposed[i] = new int[rows];
    }
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            transposed[i][j] = m[j][i];
        }
    }
    return transposed;
}