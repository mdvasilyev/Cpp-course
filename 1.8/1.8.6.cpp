#include <iostream>
using namespace std;

int logarithm(int x)
{
    int res = 0;
    while (x / 2 != 0)
    {
        x /= (float)2;
        res++;
    }

    return res;
}

int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << logarithm(arr[i]) << "\n";
    }

    return 0;
}