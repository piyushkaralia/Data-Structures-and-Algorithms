#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,string>s;
    s[1]="myself";
    s[3]="karalia";
    s[2]="pyush";
    //one more way
    s.insert({5,"starting"});
    cout<<"before erase"<<endl;
    for(auto i:s){
        cout<<i.first<<" "<<i.second<<endl;
    }//will print in order
    cout<<"finding -5 ->"<<s.count(-5)<<endl;
    cout<<"finding 3  ->"<<s.count(3)<<endl;

    //s.erase(5);
    cout<<"after erase"<<endl;
     for(auto i:s){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    auto itr=s.find(2);
    for(auto i=itr;i!=s.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }cout<<endl;



    

    
}