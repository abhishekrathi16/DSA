#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//finding sum of first n natural no.s using recursion
int sum(int n){
    if(n==0)
        return 0;   
    return sum(n-1)+n;  //takes O(n) time and space
}

//using loop
int Isum(int n){
    int s=0,i;
    for(i=1;i<=n;i++){
        s=s+i;   //takes O(n) time but O(1) space
    }
    return s;
}

int main(){
    int r;
    r=sum(5);
    cout<<r<<endl;
    int rI=Isum(5);
    cout<<rI<<endl;
    return 0;
}