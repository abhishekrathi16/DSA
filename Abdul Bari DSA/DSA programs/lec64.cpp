#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//factorial of a number using recursion

int fact(int n){
    if(n==0){
        return 1;
    }else{
        return fact(n-1)*n;
    }
}

//using loop
int Ifact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

int main(){
    int f=fact(5);
    cout<<f<<endl;
    int If=Ifact(5);
    cout<<If<<endl;
    return 0;
}