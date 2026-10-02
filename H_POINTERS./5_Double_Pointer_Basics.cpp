#include <iostream>
using namespace std; 
int main (){
    int t=3;
    int *p1=&t;
    int **p2=&p1;
    cout<<p1<<endl;

    //Printing i
    cout<<t<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl;

    //Printing adress of t
    cout<<&t<<endl;
    cout<<p1<<endl;
    cout<<*p2<<endl;



}
          