#include <iostream>
using namespace std;
int main(){
    int arr[10]={2,4,5,9};
    //To Print address
    cout<<"the address of first block is "<<arr<<endl;
    cout<<"the address of first block is "<<&arr[0]<<endl;

    //To Print Values at that address
    cout<<*arr <<endl;
    cout<<(*arr)+1<<endl;
    cout<<*(arr+1)<<endl;//arr[1] got printed
    cout<<(*arr)+1<<endl; 
    cout<<*(arr+2)<<endl;//jummbed two blocks (arr[0]->arr[2])  
    int i=3;
    cout<<i[arr]<<endl;// another way
    cout<<*(2+arr)<<endl;

    cout<<*(&arr[2])<<endl;

    // diff in array and pointer
    int temp[10];
    int *ptr=&arr[0];
    cout<<"size of temp ->"<<sizeof(temp)<<endl;//40
    cout<<"size of ptr ->"<<sizeof(ptr)<<endl;  //8
    cout<<"size of value present at that address ->"<<sizeof(ptr)<<endl; //4

    // diff in & of ptr and arr
    int arr2[10]={1,2,3,4,5};
    int *p=&arr[0];
    cout<<"->"<<&arr[0]<<endl;
    cout<<"->"<<&p<<endl;

    //adding a variable size to pointer
    int arr3[9]={1,2,3,4,5};
    //ERROR3
    //arr=arr+1;

    int *pt=&arr3[0];
    cout<<pt<<endl;
    pt=pt+1;// shift it by 1*size of variable (int ->1*4=4)
    cout<<pt<<endl;
    cout<<*pt<<endl;

}