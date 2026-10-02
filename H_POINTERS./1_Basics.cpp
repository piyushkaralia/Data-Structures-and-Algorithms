#include <iostream>
using namespace std;
int main(){
    int num=5;
    int *ptr=&num;
    // int *ptr=0;// or int *ptr;
    // ptr=&num;// same as the int *ptr=&num;
    cout<<&num<<endl;// output->address
    cout<<*ptr<<endl;// output->5
    cout<<ptr<<endl;// output->address
    cout<<num<<endl;// output->5

    //size
    cout<<"size of integer->"<<sizeof(num)<<endl; //4
    cout<<"size of pointer->"<<sizeof(ptr)<<endl; //8 

    //Incrementing
    cout<<"Before->"<<*ptr<<endl;
    (*ptr)++;
    cout<<"After->"<<*ptr<<endl;

    //saving the first pointer in secong pointer
    int *q= ptr;
    cout<<ptr<<"-"<<q<<endl;
    cout<<*ptr<<"-"<<*q<<endl;

    // Pointer Arthimetic
    cout<<ptr<<endl;
    ptr=ptr+1; // address get added by (how much we add)*sizeOfVariable; 
    cout<<ptr<<endl;


    

}