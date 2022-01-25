#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//using iterative approach to solve Taylor series using Horner's rule

double e(int x,int n){
    double s=1;
    int i;
    double num=1;
    double den=1;
    for(i=1;i<=n;i++){
        num*=x;
        den*=i;
        s=s+(num/den);
    }
    return s;
}

int main(){
    cout<<e(1,10)<<endl;
    return 0;
}