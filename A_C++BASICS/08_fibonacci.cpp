#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    //n3
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int n3=a+b;
        cout<<n3<<" ";
        a=b;
        b=n3;

    }
}