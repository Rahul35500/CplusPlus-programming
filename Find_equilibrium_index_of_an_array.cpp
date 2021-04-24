#include <iostream>
#include <numeric>
void EquilibriumIndex(int array[], int n);
using namespace std;
int main()
{
    int array[] = {0, -3, 5, -4, -2, 3, 1, 0};
    int n = sizeof(array) / sizeof(array[0]);
    EquilibriumIndex(array, n);
}
void EquilibriumIndex(int array[], int n)
{
    int sum_of_total_array = accumulate(array, array + n, 0);
    int sum_of_right_subarray = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (sum_of_right_subarray == sum_of_total_array - (array[i] + sum_of_right_subarray))
        {
            cout << "Equilibrium Index found : " << i << endl;
        }
        sum_of_right_subarray += array[i];
    }
}