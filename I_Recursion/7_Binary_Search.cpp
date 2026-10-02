#include <iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e,int k){
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    if(k==arr[mid]){
        return true;
    }
    if(k>arr[mid]){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }

}
int main(){

    int arr[6]={1,3,5,6,22,33};
    cout<<"Found Or Not->"<<binarySearch(arr,0,5,35)<<endl;
}