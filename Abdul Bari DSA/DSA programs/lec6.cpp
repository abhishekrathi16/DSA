//structure basic -- lecture 6

#include<stdio.h>
#include<iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
    char x;  //here instead of taking 1 byte for char, it will take 3 bytes extra so that it is easier for the compiler to run the code
    //so here the char has size 4 (size nearest to char bigger than it)
    //this is called padding
}r1,r2,r3; //this is also a method of declaring global var of a structure

//a structure doesnt consume memory until and unless a variable of the structure is created

struct Rectangle r; //global variable accessible to all functions

int main(){
    struct Rectangle R; //local variable accessibe in main() only
    R={10,5}; //equal to R.length=10; and R.breadth=5;
    cout<<sizeof(R)<<endl;
    cout<<R.length;
    cout<<R.breadth;
    
    return 0;
}