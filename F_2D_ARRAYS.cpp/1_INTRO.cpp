#include <iostream>
using namespace std;
int main(){
    //creating an 2d array
    int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
 
    //taking input ->row wise input
    for (int i=0;i<3;i++)
    {
       for(int j=0;j<4;j++){
        cin>>arr[i][j]; 
       }
    }
       
    

    /*
    //taking input ->coloumn wise input
    for (int i=0;i<4;i++)
    {
       for(int j=0;j<3;j++){
        cin>>arr[j][i];
       }
    }
       
    */

    //print
    for (int i=0;i<3;i++)
    {
       for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }
    
}