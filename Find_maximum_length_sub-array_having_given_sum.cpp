#include <iostream>
using namespace std;

void findMaxLenSubarray(int arr[], int n, int S)
{
    int length = 0;

    int index = -1;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if (sum == S)
            {
                if (length < j - i + 1)
                {
                    length = j - i + 1;
                    index = j;
                }
            }
        }
    }
    cout << "start index value [" <<index-length + 1 << "," << index << "]" << endl;
    cout << "maximum length of the subarray : " << length << endl;
    cout << "maximum lengthy subArray are {";
    for (int i = index - length + 1; i <= index; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}";
   // printf("[%d, %d]", index - length + 1, index);
}

int main(void)
{
    int arr[] = {5, 6, -5, 5, 3, 5, 3, -2, 0};
    int sum = 8;

    int n = sizeof(arr) / sizeof(arr[0]);

    findMaxLenSubarray(arr, n, sum);

    return 0;
}