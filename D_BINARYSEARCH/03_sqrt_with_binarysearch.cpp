#include <iostream>
using namespace std;
int sqrt(int x) {
    int s = 0;
    int e = x;
    int ans = -1;

    while (s <= e) {
        long long int mid = s + (e - s) / 2;
        long long int square =  mid * mid;

        if (square == x) {
            return mid;
        }
        else if (square < x) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    return ans;
}
double morePrecisely(int x,int priciseness,int tempsol){
    double factor =1;
    double ans=tempsol;
    for (int i = 0; i < priciseness; i++)
    {
        factor=factor/10;
        for (double j= tempsol; j*j<x; j+=factor)
        {
            ans=j;
        } 
    }
    return ans;

}
int main(){
    int n;
    cout<<"Enter ur no."<<endl;
    cin>>n;
    int tempsol=sqrt(n);
    cout<<"answer is "<<morePrecisely(n,3,tempsol);
    
}
