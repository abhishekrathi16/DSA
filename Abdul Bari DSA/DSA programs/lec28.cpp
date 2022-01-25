#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Rectangle{
    private:
    int length,breadth;

    public:
    //constructor overloading 
    Rectangle(){
        length=0;
        breadth=0;
    }
    Rectangle(int l, int b){
        length=l;
        breadth=b;
    }

    //facilitators
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }

    //mutators
    void setLength(int l){
        length=l;
    }
    void setBreadth(int b){
        breadth=b;
    }

    //accessors
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    ~Rectangle(){

    }
};

int main(){
    Rectangle r(10,5);
    cout<<"Area="<<r.area()<<endl;
    cout<<"Length is="<<r.getLength()<<endl;
    r.setBreadth(10);
    cout<<"New breadth is="<<r.getBreadth()<<endl;
    return 0;
}