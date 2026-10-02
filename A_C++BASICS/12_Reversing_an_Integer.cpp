#include <iostream>
using namespace std;
int main(){
    int ans=0, n;
    cout<<"Enter n\n";
    cin>>n;
    int digit;
    while(n){
        digit=n%10;
        ans=(ans*10)+digit;
        n=n/10;
    }
    cout<<ans<<endl;
}
//https://leetcode.com/problems/reverse-integer/description/