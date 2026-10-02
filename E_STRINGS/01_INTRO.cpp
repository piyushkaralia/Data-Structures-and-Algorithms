#include <iostream>
using namespace std;
//This is case Sensitive
bool CheckPalindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[100];
    cout<<"Enter your Name "<<endl;
    cin>>name;
    //name[2]='\0';
    cout<<"My Name is ";
    cout<<name<<endl;
    int len=getLength(name);
    cout<<"length->"<<len<<endl;
    reverse(name,len);
    cout<<"After Reversing "<<endl;
    cout<<name<<endl;
    cout<<"Palindrome or not -> "<<CheckPalindrome(name,len);
} 