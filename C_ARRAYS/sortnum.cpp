#include <iostream>
using namespace std;
void printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void sort012(int arr[],int size){

}
int main(){
    int arr[8]={1,1,0,1,0,0,1,0};
    sort012(arr,8);
    printarray(arr,8);
}