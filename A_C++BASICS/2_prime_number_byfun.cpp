 #include <iostream>
 using namespace std;
 bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 1;
        }
        
    }
    return 0;
 }
 int main(){
    int n;
    cout<<"Enter ur no"<<endl;
    cin>>n;
    if(isprime(n)==1){
        cout<<"'NOT A PRIME NUMBER";
    }
    else{
        cout<<"IS A PRIME NUMBER";
    }
 }