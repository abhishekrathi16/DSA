#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


int main(){
    Rectangle r={10,5};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    //for normal variable r use dot operator(.)

    //declaring a pointer to the struct Rectangle
    Rectangle *p=&r;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    //for pointer variable use arrow operator (->)

    //how to create object of the Rectangle structure in heap
    Rectangle *ptr;
    ptr=(struct Rectangle*)malloc(sizeof(struct Rectangle)); //size is 8 bytes
    //using this object
    ptr->length=20;
    ptr->breadth=15;
    cout<<ptr->length<<endl;
    cout<<ptr->breadth<<endl;

    return 0;
}