#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//this is a example of call by value
int add(int a,int b){
    cout<<"Inside add() [call by value]"<<endl;
    int c=a+b;
    a++; //value of a changes but it is not reflected on num1
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;

    return c;
}

//this is an example of call by address
void swap(int *x,int *y)  //use pointers in formal parameters to store the address of the variables
{
    cout<<"Inside swap() [call by address]"<<endl;
    int temp;
    temp=*x;  //dereferencing
    *x=*y;   //changes actual values of num1 and num2
    *y=temp;
    cout<<"*x is "<<*x<<endl;
    cout<<"*y is "<<*y<<endl;
}

//this is example of call by reference
void swap2(int &x,int &y)  //use ampercand in the formal parameters
{
    cout<<"Inside swap2() [call by reference]"<<endl;
    int temp;
    temp=x;
    x=y;   //changes actual values of num1 and num2
    y=temp;
    cout<<"x is "<<x<<endl;
    cout<<"y is "<<y<<endl;
}



int main(){
    //call by value
    int num1=10,num2=15,sum;
    sum=add(num1,num2);
    cout<<"Sum is :"<<sum<<endl;
    cout<<"Value of num1 after add()"<<num1<<endl;
    cout<<"Value of num2 after add()"<<num2<<endl;

    //call by address
    swap(&num1,&num2); //use ampercand to pass the addrss of the variables
    cout<<"Value of num1 after swap() is "<<num1<<endl;
    cout<<"Value of num2 after swap() is "<<num2<<endl;

    //call by reference
    swap2(num1,num2); 
    cout<<"Value of num1 after swap2() is "<<num1<<endl;
    cout<<"Value of num2 after swap2() is "<<num2<<endl;
    return 0;
}