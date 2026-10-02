#include <iostream>
using namespace std;
int main(){
    
}
/*
int i=1;

 int n;
 cin>>n;
 while(i<=n){
  int j=1;
  while(j<=n){
      cout<<"*";
      j++;
  }
  cout<<endl;
  i++;
 }

*/
/*
int i =1;
  int n;
  cin>>n;
  while(i<=n){
   int j=1;// when j=i then pattern formed will be downward right angled triangle (iteration)
   while(j<=n){
       cout<<i;
       j++;
   }
   cout<<endl;
   i++;
  }
*/
/*
int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
*/
/*

    int i = 1;
    int count=1;
    int n;
    cout<<"enter n"<<endl;
    cin >> n;
    while(i<=n){
        int j=1;
        while(j<=n){
        cout<<count<<" " ;
        count++;
        j++;
    }
    cout<<endl;
    i++;
    }
*/
/*

    int i = 1;
    int n;
    cout<<"enter n"<<endl;
    cin >> n;
    while(i<=n){
        int j=1;
        while(j<=i){
        cout<<i-j+1;
        j++;
    }
    cout<<endl;
    i++;
    }
*/

/*

    int i = 1;
    int n;
    cout << "enter n" << endl;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= i)
        {
            cout << 'A' + i - 1; 
            j++;
        }
        cout << endl;
        i++;
    }
*/
/*
int i = 1;
    int n;
    cout << "enter n" << endl;
    cin >> n;
    
    while (i <= n)
    {
        int j = 1;
       int value =i;
        while (j <=n)
        { 
            cout <<value; 
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
*/

// one way of doing
/*

   
    int i = 1;
    int n;
    cout << "enter n" << endl;
    cin >> n;
    
    while (i <= n)
    {
        int j = 1;
        char value ='A'+i-1;
        while (j <=n)
        { 
            cout <<value;
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
*/
// second way of doing

/*

    int i = 1;
    int n;
    cout << "enter n" << endl;
    cin >> n;
   
    
    while (i <= n)
    {
        int j = 1;
        while (j <=n)
        { 
             char ch='A'+i+j-2;
            cout <<ch; 
            j++;
        }
        cout << endl;
        i++;
    }
*/