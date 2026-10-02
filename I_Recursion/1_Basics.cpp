#include <iostream>
using namespace std;
void print_tail_rec(int n){
    //Base Case
    if(n==0){
        return ;
    }
    //Processing
    cout<<n<<" ";
    
    //Recursive Relation
    print_tail_rec(n-1);
}

void print_Head_rec(int n){
    //Base Case
    if(n==0){
        return ;
    }
    //Recursive Relation
    print_Head_rec(n-1);

    //Processing
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter N"<<endl; 
    cin>>n;
    cout<<"Tail recursion"<<endl;
    print_tail_rec(n);
    cout<<endl;
    cout<<"Head recursion"<<endl;
    print_Head_rec(n);
}

/*
int power(int n){
    if(n==0){
        return 1;
    }
    return 2*power(n-1);
}
int fact(int n){
//Base case
    if(n==0){
        return 1;
    }
//Recursive call
    return n*fact(n-1);//proccessing like first n*n-1*fact(n-2)
    
}
    
int main(){
    
    int n;
    cout<<"Enter N"<<endl;
    cin>>n;
    int ans=fact(n);
    int ans2=power(n);
    cout<<"Factorial is:"<<ans<<endl;
    cout<<"Power is:"<<ans2<<endl;
   
}
*/