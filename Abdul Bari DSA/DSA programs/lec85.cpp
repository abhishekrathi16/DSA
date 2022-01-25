#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int *p,*q;
    p=(int *)malloc(5*sizeof(int));
    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=11;
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    //now to increase the size of the array, we wll need to allocate a new array
    q=(int *)malloc(10*sizeof(int));//new array of 10 elements
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    free(p);
    p=q; //pointing p to the array of q
    q=NULL;  //freeing q of the array

    for(int i=0;i<10;i++){
        cout<<p[i]<<endl;
    }

    return 0;
}