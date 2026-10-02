#include <iostream>
using namespace std;
bool IsSortedArray(int arr[],int size){
    if(size==1||size==0){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return IsSortedArray(arr+1,size-1);
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    if(IsSortedArray(arr,5)){
        cout<<"Array Is Sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
}