#include <iostream>
using namespace std;
bool palindrone(string &str,int s,int e){
    if(s>e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    return palindrone(str,s+1,e-1);
}
int main(){
    string str="abba";
    cout<<palindrone(str,0,str.length()-1)<<endl;
}

/*
#include <iostream>
using namespace std;

bool palindrone(string &str, int s){
    int e = str.length() - 1 - s;   // mirror index calculated from s
    if(s >= e){
        return true;
    }
    if(str[s] != str[e]){
        return false;
    }
    return palindrone(str, s+1);
}

int main(){
    string str = "abba";
    cout << palindrone(str, 0) << endl;
}
*/