#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

//we will solve the same problem that we solved in Lec 22 but by using modular programming approach this time

//we make functions to find the area and breadth

int area(int l,int b){
    return l*b;
}

int perimeter(int l,int b){
    int p;
    p=2*(l+b);
    return p;
}

int main(){
    int length=0,breadth=0;
    printf("Enter the length and breadth: ");
    cin>>length>>breadth;

    int a=area(length,breadth);
    int peri=perimeter(length,breadth);

    printf("Area=%d\nPermieter=%d\n",a,peri);

    return 0;
}