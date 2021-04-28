#include <iostream>
using namespace std;
int majority(int arr[], int n);
int main()
{
    int arr[] = {1, 8, 7, 4, 1, 2, 2, 2, 2, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = majority(arr, n);
    cout << "majority element is:" << result;
}
int majority(int arr[], int n)
{
    int m, i = 0;
    for (int j = 0; j < n; j++)
    {
        if (i == 0)
        {
            m = arr[j];
            i = 1;
        }
        else
        {
            if (m == arr[j])
            {
                i++;
            }
            else
            {
                i--;
            }
        }
    }
    return m;
}