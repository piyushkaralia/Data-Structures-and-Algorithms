#include <iostream>
using namespace std;

int main() {
    string s="my name is pyush";
    s.erase(8,2);
    //8->the index froom where we want to delete it and 2->how much we want to delete
    cout<<s<<endl;
    return 0;
}