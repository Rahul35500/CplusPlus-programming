#include <iostream>
#include <algorithm>
using namespace std;
void In_place_merge_two_sorted_arrays_Display(int X[], int Y[], int x_size, int y_size);
void In_place_merge_two_sorted_arrays(int X[], int Y[], int x_size, int y_size);
int main()
{
    int X[] = {1, 4, 7, 8, 10,12};
    int Y[] = {2, 3, 9,11};
    int x_size = sizeof(X) / sizeof(X[0]);
    int y_size = sizeof(Y) / sizeof(Y[0]);
    In_place_merge_two_sorted_arrays(X, Y, x_size, y_size);
    In_place_merge_two_sorted_arrays_Display(X, Y, x_size, y_size);
}
void In_place_merge_two_sorted_arrays(int X[], int Y[], int x_size, int y_size)
{
    int Hold_first_value;
    for (int i = 0; i < x_size; i++)
    {
        if (X[i] > Y[0])
        {
            swap(X[i], Y[0]);
            Hold_first_value = Y[0];
            int j;
            for (j = 1; j < y_size && Y[j] < Hold_first_value; j++)
            {
                Y[j - 1] = Y[j];
            }
            Y[j - 1] = Hold_first_value;
        }
    }

}
void In_place_merge_two_sorted_arrays_Display(int X[], int Y[], int x_size, int y_size)
{
    cout<<"X[]={";
    for(int i=0;i<x_size;i++)
    {
        cout<<X[i]<<" ";
    }
    cout<<"}"<<endl;
    cout<<"Y[]={";
    for(int i=0;i<y_size;i++)
    {
        cout<<Y[i]<<" ";
    }
    cout<<"}"<<endl;
}