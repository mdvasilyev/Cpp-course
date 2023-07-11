#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int a_i = 0;
    int b_i = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a_i >> b_i;
        arr[i] = a_i + b_i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}