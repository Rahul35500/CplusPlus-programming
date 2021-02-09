#include <iostream>
using namespace std;
void printAllSubarray(int arr[], int n);
int main()
{
    int arr[] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printAllSubarray(arr, n);
}
void printAllSubarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum == 0)
            {
               // cout << "subarray are " << i << "  " << j<<endl;
                 cout<<"Subarray are [";
                for(int k=i;k<j;k++)
                {
                    cout<<","<<k;
                    
                }
                   cout<<"]";
                   cout<<endl;
            }
        }
    }
}