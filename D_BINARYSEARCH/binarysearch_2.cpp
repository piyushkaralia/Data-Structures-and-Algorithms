#include <iostream>
using namespace std;
int firstoccurance(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start +(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        mid=start +(end-start)/2;
    }
    return ans;

}

int lastoccurance(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start +(end-start)/2;
    int ans2=-1;
    while(start<=end){
        if(key==arr[mid]){
            ans2=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        mid=start +(end-start)/2;
    }
    return ans2;

}
int main()
{

    int arr[6] = {1,2,3,3,4,5};
    int first = firstoccurance(arr,6,3);
    cout << first << endl;
    int last = lastoccurance(arr,6,3);
    cout << last << endl;
}
