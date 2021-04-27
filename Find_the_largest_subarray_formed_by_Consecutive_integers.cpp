#include <iostream>
#include <vector>
using namespace std;
void display(int array[],int start,int end);
bool isConsecutive(int array[], int i, int j, int minimum, int maximum)
{
    if (maximum - minimum != j - i)
    {
        return false;
    }

    vector<bool> visited(j - i + 1);

    for (int k = i; k <= j; k++)
    {
        if (visited[array[k] - minimum])
        {
            return false;
        }

        visited[array[k] - minimum] = true;
    }

    return true;
}

void findMaxSubarray(int array[], int n)
{
    int len = 1;
    int start = 0, end = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int minimum = array[i],maximum = array[i];

        for (int j = i + 1; j < n; j++)
        {
        minimum = min(minimum, array[j]);
        maximum = max(maximum, array[j]);

            if (isConsecutive(array, i, j,minimum,maximum))
            {
                if (len <maximum -minimum + 1)
                {
                    len =maximum -minimum + 1,
                    start = i;
                    end = j;
                }
            }
        }
    }

    display(array,start,end);
}
void display(int array[],int start,int end)
{
    cout<<"largest subarray is {";
    for(int i=start;i<=end;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"}";
}
int main()
{
    int array[] = {2, 0, 2, 1, 4, 3, 1, 0};
    int n = sizeof(array) / sizeof(array[0]);

    findMaxSubarray(array, n);

    return 0;
}