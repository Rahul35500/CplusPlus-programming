#include <iostream>
#include <unordered_map>
using namespace std;

void maximum_length_array(int arr[], int n, int S)
{
    unordered_map<int, int> maps;
    int sum = 0;
    int length = 0;

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (maps.find(sum) == maps.end())
        {
            maps[sum] = i;
        }

        if (maps.find(sum - S) != maps.end() && length < i - maps[sum - S])
        {
            length = i - maps[sum - S];
            index = i;
        }
    }
    cout << "start index value [" << index - length + 1 << "," << index << "]" << endl;
    cout << "maximum length of the subarray : " << length << endl;
    cout << "maximum lengthy subArray are {";
    for (int i = index - length + 1; i <= index; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}";
}

int main()
{
    int arr[] = {5, 6, -5, 5, 3, 5, 3, -2, 0};
    int sum = 8;

    int n = sizeof(arr) / sizeof(arr[0]);

    maximum_length_array(arr, n, sum);

    return 0;
}
