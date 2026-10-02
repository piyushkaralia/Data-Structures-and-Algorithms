/*
#include <bits/stdc++.h>
void converter(long long n,vector<int>&no){


    long long ans=0;
    int i=0;
    while(n!=0){
        int bit=n&1;
        no.push_back(bit);
        n=n>>1;
        i++;
    }
}
int palindrome(vector<int> n,int s,int e){
    if(s>e){
        return true;
    }
    if(n[s]!=n[e]){
        return false;
    }
    return palindrome(n,s+1,e-1);

}
bool checkPalindrome(long long N)
{
    vector<int>no;
    converter(N,no);
    return palindrome(no,0,no.size()-1);
}
*/