#include <iostream>
using namespace std;
int getMax(int num[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi=max(maxi,num[i]);
        //or
        /*
        if (num[i] > max)
        {
            max = num[i];
        }
        */
    }
    return maxi;
}
int getMin(int num[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        mini=min(mini,num[i]);
        //or
        /*
        if (num[i] < min)
        {
            min = num[i];
        }
        */
    }
    return mini;
}

int main()
{
    int num[100];
    cout << "Enter the size of the array" << endl;
    int size;
    cin >> size;
    cout << "Input Values of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Maximum Value Is " << getMax(num, size) << endl;
    cout << "Minimum Value Is " << getMin(num, size) << endl;
}