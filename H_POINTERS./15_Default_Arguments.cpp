//Start is the default argument here
//declaring default arguments always starts from right to left // we can declare defaults argument anywhere we want
#include <iostream>
using namespace std;
void Print(int arr[],int n,int start=0 ){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    Print(arr,5);
    cout<<endl;
    Print(arr,5,2);

}