#include <iostream>
using namespace std;
void update1(int & n){
    n++;
}
// update2 func wont change anything ->it will just change the local variable of its own function
// void update2(int n){
//     n++;
//}
int main(){
    // int i=5;
    // //creating a reference variable
    // int &j=i;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;

    int i=7;
    cout<<"before->"<<i<<endl;
    update1(i);
    cout<<"after ->"<<i<<endl; 
}