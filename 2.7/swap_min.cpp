#include <algorithm>
#include <iostream>
using namespace std;

void swap_min(int *m[], unsigned rows, unsigned cols);

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
    swap_min(arr, rows, cols);
    return 0;
}

void swap_min(int *m[], unsigned rows, unsigned cols)
{
    int min = m[0][0];
    int cur = 0;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; j++)
        {
            if (m[i][j] < min)
            {
                min = m[i][j];
                cur = i;
            }
        }
    }
    int *tmp = m[0];
    m[0] = m[cur];
    m[cur] = tmp;
}
