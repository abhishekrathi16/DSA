//array basics -- lecture 4

#include<iostream>  //c++ == c sdtio.h
#include<string>
#include<math.h>

#include<bits/stdc++.h>  //combination of all header files except iostream
//linked lists, stacks, queues --> predefined 

using namespace std; //c++ already defined functions
//std means you can use this while using the system defined functions
//std::func_name()

int main(){
    int A[5]; //declaration of an array of 5 integers
    A[0]=12;
    A[1]=15;
    A[2]=10;
    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl; //how to access elements of an array
    int B[]={2,4,6,8,10};//declaration and initialisation together
    int C[10]={12,14,16,18}; //if we initialize only a few elements of the array with a determined size, the uninitialised elements become zero
    cout<<C[8]<<endl; //prints 0
    //we can use a for loop to access the elements of an array as well
    for(int i=0;i<5;i++){
        cout<<B[i]<<endl;
    }

    //for each loop in C++
    for(int x:B){
        cout<<x<<",";
    }

    //creating an array with size taken as user input
    int n;
    cout<<"Enter size: ";
    cin>>n;
    //we can create an array with size taken as input, but not initialise it at the same time, that is 
    int D[n]; //is correct
    //but int D[n]={1,2,3,4,5...} is incorrect
    //if it is not initialised, the array will contain garbage values
    //NOTE THE DIFFERENCE BETWEEN INITIALISED ARRAYS AND NON INITIALISED ARRAYS
    //garbage values are values that we dont assign, hence zero is also garbage
    return 0;
}

//cout = printf
// scanf = cin 
