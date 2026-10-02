#include <iostream>
using namespace std;
bool ispossible(int arr[],int m,int n, int mid){
    int pagesum=0;
    int studentcount=1;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m||arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
    }
    
}
return true;
}

int allocate_books(int arr[],int m,int n){
    int sum=0;
    
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    int start=0;
    int end=sum;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
    if(ispossible(arr,m,n,mid)){
        ans=mid;
        end=mid-1;
        
    }
    else{
        start=mid+1;

    }
    mid=start+(end-start)/2;
    

}
return ans;
}
int main(){
    int arr[4]={10,22,33,44};
    int n=4;
    int m=2;
    int ans=allocate_books(arr,m,n);
    cout<<ans;

}