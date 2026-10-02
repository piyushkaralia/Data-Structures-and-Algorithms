#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Amount"<<endl;
    cin>>n;
    int y=1;
    switch(y){
        case 1:{
            int count100;
            count100=n/100;
            n=n%100;
            cout<<count100<<endl;
            
            
        }
        case 2:{
                int count50;
                count50=n/50;
                n=n%50;
                cout<<count50<<endl;

            }
        case 3:{
                int count10;
                count10=n/10;
                n=n%10;
                cout<<count10<<endl;
        }
        case 4:{
                int count1;
                count1=n;
                cout<<count1<<endl;
            

    }
   
}
}
