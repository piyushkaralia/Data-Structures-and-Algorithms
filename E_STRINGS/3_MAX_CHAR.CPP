#include <iostream>
using namespace std;
char maxchar(string s){
    int arr[26]={0};
    int number=0;
    for (int i = 0; i < s.length(); i++)
    {
        char ch=s[i];
        number=ch-'a';
        arr[number]++;
    }
    int max=-1;
    int ans=0;
    for (int i = 0; i < 26; i++)
    {
        if(max<arr[i]){
            ans=i;
            max=arr[i];
        }

    }
    return ans + 'a';
    
}

int main(){
    string s;
    cout<<"Enter your word"<<endl;
    cin>>s;
    cout<<maxchar(s)<<endl;
    
    
}