#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//the static variable is the same as a global variable,ie, the variable declared out of all function scopes
int fun(int n){
    static int x=0;  //we are using a static variable here
    if(n>0){
        x++; //updation
        return fun(n-1)+x;
    }
    return 0;
}

int main(){
    int a=5;
    printf("%d\n",fun(a));
    return 0;
}