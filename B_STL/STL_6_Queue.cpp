#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("I");
    q.push("Love");
    q.push("You");
    //yaha par first element hi print hoga
    cout<<"Size after pop->"<<q.size()<<endl;
    cout<<"First Element->"<<q.front()<<endl;
    q.pop();
    cout<<"First Element->"<<q.front()<<endl;
    
    cout<<"Size after pop->"<<q.size()<<endl;
}