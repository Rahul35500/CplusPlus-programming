#include <iostream>
#include <algorithm>
void DISPLAY_MERGE_SORT(int X[], int Y[], int m, int n);
void merge(int X[], int Y[], int m, int n);
using namespace std;
int main()
{
    int X[] = {0, 2, 0, 3, 0, 5, 6, 0, 0};
    int Y[] = {1, 8, 9, 10, 15};

    int m = sizeof(X) / sizeof(X[0]);
    int n = sizeof(Y) / sizeof(Y[0]);
    merge(X, Y, m, n);
    sort(begin(X), end(X), [](int a, int b) { return a < b; });
    DISPLAY_MERGE_SORT(X, Y, m, n);
}
void merge(int X[], int Y[], int m, int n)
{
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        if (X[i] == 0)
        {
            X[i] = Y[k];
            k++;
        }
    }
}
void DISPLAY_MERGE_SORT(int X[], int Y[], int m, int n)
{
    cout<<"X[] = ";
    for (int i = 0; i < m; i++)
    {
        cout << X[i] << " ";
    }
}