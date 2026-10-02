// VECTOR
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,1);
    for(int i:a){ 
        cout<<i<<" ";
    }
    cout<<endl;
    //5 means size 
    //1 means saare elements 1 se initialize kar do
    vector<int> t(a);
    //a ke elments t me copied by t(a)
    for(int i:t){ 
    cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Capcity-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capcity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capcity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capcity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl;

    cout<<"element at 2nd index-> "<<v.at(2)<<endl;

    cout<<"front"<<v.front()<<endl;
    cout<<"last"<<v.back()<<endl;

    cout<<"before pop-> ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    // Removes last element

    cout<<"after pop->";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"before clear size->  "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size-> "<<v.size()<<endl;

}