#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}}; //declaration and initialisation of a 2D array in stack 
    //for 2D array partially in heap and in stack
    int *B[3]; //array of pointers created in stack
    B[0]=(int *)malloc(4*sizeof(int));  //array in heap
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));

    //2D array completely in heap
    int **C;
    C=(int **)malloc(3*sizeof(int *)); //array of pointers in heap  //3 rows
    C[0]=(int *)malloc(4*sizeof(int));  //arrays in heap  // 4 columns
    C[1]=(int *)malloc(4*sizeof(int));  //4 columns
    C[2]=(int *)malloc(4*sizeof(int));  //4 colums

    //traversing an array
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}