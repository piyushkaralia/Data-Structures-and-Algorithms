#include <iostream>
using namespace std;
void RowWiseSum(int arr[][4],int i ,int j){
    for (int i=0;i<3;i++){
        int sum=0;
       for(int j=0;j<4;j++){
        sum+=arr[i][j];
       }
       cout<<sum<<" ";
    }
}
int largestRowSum(int arr[][4],int i,int j){
    int maxi=INT_MIN;
    int index=-1;
    for (int i=0;i<3;i++){
        int sum=0;
       for(int j=0;j<4;j++){
        sum+=arr[i][j];
       }
       if(sum>maxi){
        maxi=sum;
        index=i;
       }
       
    }
    cout<<"the max sum is "<<maxi<<endl;
    return index;
}
void ColWiseSum(int arr[][4],int i ,int j){
    for (int j=0;j<4;j++){
        int sum=0;
       for(int i=0;i<3;i++){
        sum+=arr[i][j];
       }
       cout<<sum<<" ";
    }
}
int main(){
    //creating an 2d array
    int arr[3][4];

    
    //taking input ->row wise input
    for (int i=0;i<3;i++)
    {
       for(int j=0;j<4;j++){
        cin>>arr[i][j];
       }
    }
       
    

    //print
    for (int i=0;i<3;i++)
    {
       for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }
    cout<<"Row wise Sum"<<endl;
    RowWiseSum(arr,3,4);
    cout<<endl;
    int ans=largestRowSum(arr,3,4);
    cout<<"Max Sum is At Index"<<ans;
    cout<<endl;
    cout<<"Column wise Sum"<<endl;
    ColWiseSum(arr,3,4);
    
} 