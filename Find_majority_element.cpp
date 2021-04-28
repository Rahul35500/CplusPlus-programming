#include <iostream>
#include <vector>
#include <unordered_map>
using std::vector;
int Majority_element(vector<int> &A, int size);
using namespace std;
int main()
{
    vector<int> input = {2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2};
    int n = input.size();
    int majority = Majority_element(input, n);
    if (majority != -1)
    {
        cout << "The majority element is " << majority;
    }
    else
    {
        cout << "The majority element doesn't exist";
    }
}
int Majority_element(vector<int> &A, int size)
{
    unordered_map<int, int> maps;
    for (int i = 0; i < size; i++)
    {
        maps[A[i]]++;
    }
    for (auto pair : maps)
    {
        if (pair.second > size / 2)
        {
            return pair.first;
        }
    }
    return -1;
}