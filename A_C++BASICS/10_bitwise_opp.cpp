#include <iostream>
using namespace std;
int main()
{   // BITWISE OPERATORS
    
    int a=4;
    int b=6;

    cout<<"a&b "<<(a&b)<<endl;
    cout<<"a|b "<<(a|b)<<endl;
    cout<<"~b "<<~b<<endl;//-b-1==ans
    cout<<"a^b "<<(a^b)<<endl;
    
   //RIGHT SHIFT (generally in most of the cases we divide it by 2 , (how many times)? depends on that no after>>)
   cout<<(17>>1)<<endl;
   cout<<(17>>2)<<endl;
   //LEFT SHIFT (generally in most of the cases we multiply it by 2 , (how many times)? depends on that no after>>)
   cout<<(19<<1)<<endl;
   cout<<(19<<2)<<endl;
}