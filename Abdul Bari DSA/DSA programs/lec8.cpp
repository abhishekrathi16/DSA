#include<iostream>
#include<stdio.h>

using namespace std;

struct rectangle
{
    int l;
    int h;
};

int main(){
    int a=10;
    int *p; //declaring a pointer
    p=&a; //referencing the pointer to point at a
    cout<<a<<endl; //returns alue of a = 10
    printf("using pointer %d\n",*p); //de-referncing a pointer
    printf("Address of a is: %d\n",p);


    //pointer to an array
    int A[5]={2,4,6,8,10};
    int *P;
    P=A; //we dont have to use ampercend if we write this line to allocate address of array to pointer p
    //this is because A is pointing to the head of the array and hence we can use this to point to an array
    //another syntax we can use is : p=&A[0];

    //displaying an array using pointer to an array
    for(int i=0;i<5;i++){
        cout<<P[i]<<endl;
    }

    //allocating heap memory using a pointer in C
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));
    ptr[0]=10,ptr[1]=15,ptr[2]=20,ptr[3]=25,ptr[4]=30;
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<endl;
    }

    int *ptr2;
    ptr2=new int[5]; //allocating heap memory in C++
    ptr2[0]=10,ptr2[1]=15,ptr2[2]=20,ptr2[3]=25,ptr2[4]=30;
    for(int i=0;i<5;i++){
        cout<<ptr2[i]<<endl;
    }
    //to free the pointer 
    free(ptr); //C style
    delete[] ptr2; //C++ style

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rectangle *p5;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    //we can see that all the pointers take same memory ie 8(largest value among all the pointers)
    
    return 0;
}