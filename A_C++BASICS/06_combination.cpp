 #include <iostream>
 using namespace std;
 int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
 }
 
    int ncr(int r ,int n){
        int comb=fact(n)/(fact(r)*fact(n-r));
        return comb;

    }
 int main(){
    int n,r;
    cin>>n>>r;
    cout<<"ans is "<<ncr(r,n);
    
 }