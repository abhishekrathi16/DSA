#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

//monolithic style of programming 
//the program is to find the area and perimeter of a rectangle, take input from user

int main(){
    int length=0,breadth=0;
    printf("Enter the length and breadth: ");
    cin>>length>>breadth;

    int area=length*breadth;
    int peri=2*(length+breadth);

    printf("Area=%d\nPermieter=%d\n",area,peri);

    return 0;
}