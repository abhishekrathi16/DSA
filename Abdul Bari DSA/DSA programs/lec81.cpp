#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[5]; //ony declare
    int B[5]={1,2,3,4,5};  //declare and init together
    int C[10]={2,4,6}; //init only 3 elements with values and other with 0
    int D[5]={0}; //init all elements with 0
    int E[]={1,2,3,4,5,6};  //init and declare without mentioning the size

    //to check if the array elements are contiguous
    for(int i=0;i<5;i++){
        printf("%u \n",&A[i]);
    }
    //we can see in the output that the array elements' address only have a diff of 4 hence they are contiguous
    return 0;
}