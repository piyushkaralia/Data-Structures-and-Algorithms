#include <iostream>
using namespace std;
int printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}
void rotator(int arr[],int size){
    int k,temp;
    cin>>k;
    while(k--){
        temp=arr[0];
        for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
    
}
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    rotator(arr,6);
    cout<<"rotated array is"<<endl;
    
    printarray(arr,6);

}