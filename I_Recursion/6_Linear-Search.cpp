#include <iostream>
using namespace std;
int LinearSearch(int arr[],int size,int key){
    if(size==0){
        return 0;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        return LinearSearch(arr+1,size-1,key);
    }

}
int main(){
    int arr[5]={3,5,1,2,6};
    if(LinearSearch(arr,5,7)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}