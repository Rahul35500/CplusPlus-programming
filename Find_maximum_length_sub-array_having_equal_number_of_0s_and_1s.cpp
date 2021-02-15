#include <iostream>
#include <unordered_map>
using namespace std;
using std::unordered_map;
void maximum_length_subarray(int arr[], int n);
int main()
{
    int arr[] = {0, 0, 1, 0, 1, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    maximum_length_subarray(arr, n);
}
void maximum_length_subarray(int arr[], int n)
{
    unordered_map<int, int> maps;
    int length = 0;
    int last_index_value = -1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            sum += -1;
        }
        else
        {
            sum += 1;
        }
        if (maps.find(sum) != maps.end())
        {
            if (length < i - maps[sum])
            {
                length = i - maps[sum];
                last_index_value = i; 
            }
        }
        else
        {
            maps[sum] = i;
        }
    }
    if (last_index_value != -1)
    {
        cout << "Subarrary are present :{ ";
        for (int i = last_index_value - length + 1; i <= last_index_value; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "}";
    }
    else
    {
        cout << "Subarray are not present in array:" << endl;
    }
} 