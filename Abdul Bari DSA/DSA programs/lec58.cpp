#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void funA(int);

void funB(int n){
    if(n>0){
        printf("%d",n);
        funA(n/2);
    }
}


void funA(int n){
    if(n>0){
        printf("%d",n);
        funB(n-1);
    }
}

int main(){
    funA(20);
    return 0;
}