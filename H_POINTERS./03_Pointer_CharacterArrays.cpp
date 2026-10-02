#include <iostream>
using namespace std;
int main(){
    char ch[7]="abcdef";
    //prints entire string
    cout<<ch<<endl;

    char *c=&ch[0];
    //prints entire string
    cout<<c<<endl;
}     