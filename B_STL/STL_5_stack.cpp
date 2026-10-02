#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("mister");
    s.push("pyush");
    s.push("karalia");
    cout<<"Top element->"<<s.top()<<endl;//jo element last me hain vo sabse pehle print hoga stack me
    s.pop();
    cout<<"Top element->"<<s.top()<<endl;
    cout<<"Empty or not->"<<s.empty()<<endl;
} 