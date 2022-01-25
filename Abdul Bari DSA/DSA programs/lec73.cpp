#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//fibonacci series 

//using array
int fib(int n){
    int t0=0,t1=1,s=0;
    if(n<=1){
        return n;
    }else{
        for(int i=2;i<=n;i++){
            s=t0+t1;
            t0=t1;
            t1=s;
        }
        return s;
    }
}

//using recursion (TC O(2^n))
int rfib(int n){
    if(n<=1) return n;
    return rfib(n-2)+rfib(n-1);
}

//using recursion and memorization
int F[10];

int mfib(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }else{
        if(F[n-2]==-1){
            F[n-2]=mfib(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=mfib(n-1);
        }
        return F[n-2]+F[n-1];
    }
}
int main(){
    int i;
    for(int i=0;i<10;i++){
        F[i]=-1;   //initializing the global array with -1
    }
    cout<<fib(6)<<endl;
    cout<<rfib(6)<<endl;
    cout<<mfib(6)<<endl;
    return 0;
}