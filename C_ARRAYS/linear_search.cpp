#include <iostream>
using namespace std;
bool search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[10] = {2, -2, 3, 44, 22, 11, -43, 31, 12, 0};
    int element;
    cout << "Enter The Element TO Search For " << endl;
    cin >> element;
    int found = search(arr, 10, element);
    if (found)
    {
        cout << "Element Is Present";
    }
    else
    {
        cout << "Element Is Not Present";
    }
}