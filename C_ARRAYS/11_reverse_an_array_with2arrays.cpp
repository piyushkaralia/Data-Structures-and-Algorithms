#include <iostream>
using namespace std;
void reverse(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[size - i - 1];
    }
}
int main()
{
    int arr1[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[8];
    reverse(arr1, arr2, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << arr2[i]<<" ";
    }
}