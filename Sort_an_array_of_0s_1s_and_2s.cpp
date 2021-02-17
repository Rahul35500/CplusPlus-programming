#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    int arr[] = {0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(begin(arr), end(arr), [](int a, int b) { return a < b; });
    cout << "Sort_an_array_of_0s_1s_and_2s:\n"
         << "{";
    for (auto print : arr)
    {
        cout << print << " ";
    }
    cout << "}";
}
