#include <iostream>
using namespace std;
void print(int *p){
        cout<<p<<endl;
        cout<< *p <<endl;
    }
    void update(int *p){
        *p=*p+1;
    }
int main(){
    int value=5;
    int *ptr=&value;
    print(ptr);
    //update
    cout<<"before->"<<*ptr<<endl;
    update(ptr);
    cout<<"after->"<<*ptr<<endl;

}