//this lecture we will solve the same question as in lec 22 using OOP concept of C++ that is classes and objects

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Rectangle{
    private:
    int length,breadth;

    public:
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }

    int area(){
        return length*breadth;
    }

    int peri(){
        return (2*(length+breadth));
    }
};

int main(){
    int l=0,b=0;
    cout<<"Enter length and breadth: ";
    cin>>l>>b;

    Rectangle r(l,b);
    int a=r.area();
    int p=r.peri();

    cout<<"Area is: "<<a<<endl;
    cout<<"Perimeter is: "<<p<<endl;

    return 0;
}