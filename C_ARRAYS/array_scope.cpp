#include <iostream>
using namespace std;
void update(int arr[], int size)
{
    arr[0] = 100; // this will be stored in array so , it will print the same value at main too.(not a copy/actual update)
    // in short this value is saved at 0 adress and now the main function will also print the stored adress value
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3};
    update(arr, 3);
}