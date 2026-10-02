#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int>s;
    //saves just unique element
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);//this will second element means 2
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"-5 is present or not ->"<<s.count(-5)<<endl;
    auto itr=s.find(3);// or set<int>::iterator itr=s.find(3);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
}