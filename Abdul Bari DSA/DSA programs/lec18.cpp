#include<iostream>
#include<bits/stdc++.h><
using namespace std;

void fun(int *A,int n)//arrays are always passed by address and never by value; we can always pass the arrays as pointers too
//so instead of A[] we can also use *A
{
    cout<<sizeof(A)/sizeof(int)<<endl;
    A[0]=15;  //when we change a value in the array it is reflected on the actual parameter as well
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
}

//using [] in fun2() is an old syntax and might not be supported by all compilers so use * instead
int * fun2(int size){
    int *p;
    p=new int[size];

    for(int i=0;i<size;i++){
        p[i]=i+1;
    }
    return p;
}

int main(){
    int A[]={2,4,6,8,10};
    int n=5;
    fun(A,n);
    for(int x:A){
        cout<<x<<" ";
    }
    cout<<endl;

    int *ptr,sz=7;
    ptr=fun2(sz);
    for(int i=0;i<sz;i++){
        cout<<ptr[i]<<endl;
    }
    return 0;
}