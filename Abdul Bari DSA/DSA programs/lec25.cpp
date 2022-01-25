#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

//we will solve the same problem that we solved in Lec 22 but by using OOP approach of C this time, ie using structures and its functions

//we make functions to find the area and breadth as well as initialise the structure variables

struct Rectangle{
    int length;
    int breadth;
};

void initialise(struct Rectangle *r,int l,int b){
    r->breadth=b;
    r->length=l;
}
int area(struct Rectangle r){
    return r.length*r.breadth;
}

int perimeter(struct Rectangle r){
    int p;
    p=2*(r.breadth+r.length);
    return p;
}

int main(){
    Rectangle r={0,0};
    cout<<"We are using structures in the program"<<endl;
    printf("Enter the length and breadth: ");
    int l,b;
    cin>>l>>b;

    initialise(&r,l,b);
    int a=area(r);
    int peri=perimeter(r);

    printf("Area=%d\nPermieter=%d\n",a,peri);

    return 0;
}