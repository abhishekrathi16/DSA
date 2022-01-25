#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int add(int a, int b)  //function prototype, int is the return type of the function
{
    int c=a+b;
    return c;
}

int main(){
    int num1=10,num2=15,sum;
    sum=add(num1,num2);
    cout<<"Sum of both numbers is: "<<sum<<endl;
    return 0;
}