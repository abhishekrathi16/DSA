#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// findng exponent of a number 

int power(int m,int n){
    if(n==0){
        return 1;
    }
    return power(m,n-1)*m;
}

//using log n method
int power1(int m, int n){
    if(n==0){
        return 1;
    }

    if(n%2==0){
        return power1(m*m,n/2);
    }else{
        return power1(m*m,(n-1)/2)*m;
    }
}

int main(){
    int p=power(2,6);
    int p2=power1(2,6);
    cout<<p<<endl;
    cout<<p2<<endl;
    return 0;
}