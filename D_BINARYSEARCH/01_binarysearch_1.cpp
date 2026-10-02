#include <iostream>
using namespace std;
int binarysearch(int arr[],int size, int key)
{
    int start=0;
    int end=size-1;
    int mid = start + (end-start) / 2;//we wrote this bcz of range of int exceeding 2^31-1 when s=e=2^31-1
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
            mid = start + (end-start) / 2;
        }
        else
        {
            end = mid - 1;
            mid = start + (end-start) / 2;
        }
    }
    return -1;
}
int main()
{

    int even[6] = {2, 4, 44, 64, 66, 98};
    int odd[6] = {3, 33, 35, 65, 89, 99};
    int evenindex = binarysearch(even,6,66);
    cout << evenindex << endl;
    int oddindex = binarysearch(odd,6,65);
    cout << oddindex << endl;
}
