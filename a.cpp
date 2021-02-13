#include <stdio.h>
#include<iostream>
using namespace std;
 
// Naive function to find the maximum length subarray with sum `S` present
// in a given array
void findMaxLenSubarray(int arr[], int n, int S)
{
    // `len` stores the maximum length of subarray with sum `S`
    int len = 0;
 
    // stores ending index of the maximum length subarray having sum `S`
    int ending_index = -1;
 
    // consider all subarrays starting from `i`
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
 
        // consider all subarrays ending at `j`
        for (int j = i; j < n; j++)
        {
            // sum of elements in the current subarray
            sum += arr[j];
            cout<<"sum "<<sum<<endl;
 
            // if we have found a subarray with sum `S`
            if (sum == S)
            {
                cout<<"value"<<arr[i]<<endl;
            cout<<"sum 2 "<<sum<<endl;
                // update length and ending index of max length subarray
                if (len < j - i + 1)
                {
                    len = j - i + 1;
                    ending_index = j;
                }
            }
        }
    }
 
    // print the subarray
    printf("[%d, %d]", ending_index - len + 1, ending_index);
}
 
int main(void)
{
    int arr[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 };
    int sum = 8;
 
    int n = sizeof(arr)/sizeof(arr[0]);
 
    findMaxLenSubarray(arr, n, sum);
 
    return 0;
}