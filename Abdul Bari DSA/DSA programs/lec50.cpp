#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

//tail recursion

void fun(int n){
    if(n>0){
        printf("%d\n",n);
        fun(n-1);
    }
}

//head recursion
void fun1(int n){
    if(n>0){
        fun1(n-1);
        printf("%d\n",n);
    }
}

int main(){
    int x=3;
    cout<<"Tail Recursion"<<endl;
    fun(3);
    cout<<"Head Recursion"<<endl;
    fun1(3);
    return 0;
}