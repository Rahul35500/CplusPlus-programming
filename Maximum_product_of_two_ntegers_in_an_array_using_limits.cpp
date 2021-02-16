#include<iostream>
using namespace std;
void product(int arr[], int n);
int main()
{
    int arr[] = {-10, -1, 8, 5, 5, 6, 7, -2,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    product(arr, n);
}
void product(int arr[], int n)
{
    int multiplevalue = 0;
    int first_index;
    int last_index;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (multiplevalue < arr[i] * arr[j])
            {
                multiplevalue = arr[i] * arr[j];
                first_index = i;
                last_index = j;
            }
        }
    }
    
    cout << "pair are ["<<arr[first_index]<<","<<arr[last_index]<<"]"<<endl;
}