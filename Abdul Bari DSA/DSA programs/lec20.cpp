#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

//call by value example
void fun(struct Rectangle r1){
    cout<<"Inside fun()"<<endl;
    r1.length=20; //any change made here doesnt reflect on the actual parameter 
    cout<<"length="<<r1.length<<endl;
    cout<<"breadth="<<r1.breadth<<endl;
}

//call by address example
void fun2(struct Rectangle *r1){
    cout<<"Inside fun2()"<<endl;
    r1->length=20; //any change made here doesnt reflect on the actual parameter 
    cout<<"length="<<r1->length<<endl;
    cout<<"breadth="<<r1->breadth<<endl;
}

//example with function having return type of structure
struct Rectangle *fun3(){
    cout<<"Inside fun3()"<<endl;
    struct Rectangle *p;
    p=new Rectangle;
    //the above line can be written in C as
    // p=(struct Rectangle*)malloc(sizeof(struct Rectangle));

    p->length=15;
    p->breadth=7;
    return p;
}

int main(){
    struct Rectangle r={10,5};
    fun(r);
    cout<<"Inside main after running call by value"<<endl;
    printf("length=%d\nBreadth=%d\n",r.length,r.breadth);

    fun2(&r);
    cout<<"Inside main after running call by address"<<endl;
    printf("length=%d\nBreadth=%d\n",r.length,r.breadth);

    struct Rectangle *ptr=fun3();
    cout<<"Inside main after running fun3()"<<endl;
    cout<<ptr->length<<endl;
    cout<<ptr->breadth<<endl;

    
    return 0;
}