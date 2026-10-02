//link
/*
https://www.naukri.com/code360/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTabValue=PROBLEM
*/



/*
#include <bits/stdc++.h>
bool toremove(char s){
    return (s>='a'&& s<='z'||s>='A'&& s<='Z'||s>='0' && s<='9');
} 
char ForCapitalLetters(char s){
    if(s>='a'&& s<='z'){
            return s;
        }
        else{
            char temp =s-'A'+'a';
            return temp;
        }
     }

bool CheckPalindrome(string name, int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(!toremove(name[s])){
            s++;
        }
        else if(!toremove(name[e])){
            e--;
        }
        else if(ForCapitalLetters(name[s])!=ForCapitalLetters(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

bool checkPalindrome(string s)
{
    int n=s.size();
    return CheckPalindrome(s,n);
}
*/