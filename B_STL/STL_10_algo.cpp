#include <iostream>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding  6->"<<binary_search(v.begin(),v.end(),6)<<endl;
    //lower_bound → gives you the start boundary of where x could sit (≥ x).
    //upper_bound → gives you the end boundary, i.e., one past the last x (> x).

    cout<<"lower Bound"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper Bound"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    int a=3;
    int b=9;
    cout<<"Max"<<max(a,b)<<endl;
    cout<<"Min"<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a->"<<a<<" "<<"b->"<<b<<endl;
    string t="abcd";
    reverse(t.begin(),t.end());
    cout<<"string->"<<t<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" "; 
    }cout<<endl;
    sort(v.begin(),v.end());
    cout<<"after sorting";
    for(int i:v){
        cout<<i<<" "; 
    }cout<<endl;
    // documentation link
    //https://www.geeksforgeeks.org/cpp/the-c-standard-template-library-stl/
    //https://whimsical.com/c-stl-XVxuHHof5GTWA4NXZhXQhx
    


}