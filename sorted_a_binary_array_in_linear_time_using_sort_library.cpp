#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    //Sort a binary array in linear time
    int A[] = {0, 0, 1, 0, 1, 1, 0, 1, 0, 0};
    int n = sizeof(A) / sizeof(A[0]);
    sort(begin(A), end(A), [](int a, int b) { return a < b; });//used lambda fuction
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}