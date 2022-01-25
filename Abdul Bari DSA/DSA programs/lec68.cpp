#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//finding taylor series of n terms for a given number
double e(int x,int n){
    static double p=1,f=1;
    double r;
    if(n==0){
        return 1;
    }else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main(){
    double taylor=e(1,10);
    cout<<taylor<<endl;
    return 0;
}